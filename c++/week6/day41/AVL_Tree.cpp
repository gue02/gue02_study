#include <iostram>
#include <algorithm>
using namespace std;

struct AVLNode{
  int data;
  Node* left;
  Node* right;
  int height;
  
  AVLNode(int value) : key(value), left(nullptr), right(nullptr), height(1) {}
};

class AVLTree {
    private:
    AVLNode* root;

    int getHeight(AVLNode* node){
        return node ? node->height : 0;
    }

    int getBalance(AVLNode* node){
        return node ? getHeight(node->left) - getHeight(node->right) : 0;
    }

    void updateHeight(AVLNode* node){
        if(node) {
            node->height = 1 + max(getHeight(node->left), getHeight(node->right));
        }
    }

    //오른쪽 회전
    AVLNode* rightRotate(AVLNode* y) {
        AVLNode* x = y->left;
        AVLNode* T2 = x->right;

        x->right = y;
        y->left = T2;

        updateHeight(y);
        updateHeight(x);

        return x;
    }

    //왼쪽 회전
    AVLNode* leftRotate(AVLNode* x){
        AVLNode* y = x->right;
        AVLNode* T2 = y->left;

        y->left = x;
        x->right = T2;

        updateHeight(x);
        updateHeight(y);

        return y;
    }

    AVLNode* insert(AVLNode* node, int key){
        //일반 BST 삽입
        if(!node) return new AVLNode(key);

        if(key < node->key)
            node->left = insert(node->left, key);
        else if(key > node->key)
            node->right = insert(node->right, key);
        else
            return node;

        //높이 갱신
        updateHeight(node);

        //균형도 확인
        int balance = getBalance(node);

        //LL
        if(balance > 1 && key < node->left->key)
            return rightRotate(node);
        
        //RR
        if(balance < -1 && key > node->right->key)
            return leftRotate(node);
        
        //LR
        if(balance > 1 && key > node->left->key){
            node->left = leftRotate(node->left);
            return rightRotate(node);
        }

        //RL
        if (balance < -1 && key < node->right->key){
            node->right = rightRotate(node->right);
            return leftRotate(node);
        }

        return node;
    }
    void inorder(AVLNode* node){
        if(!node) return;
        inorder(node->left);
        cout << node->key << " ";
        inorder(node->right);
    }
public:
    AVLTree() : root(nullptr) {}

    void insert(int key){
        root = insert(root, key);
    }

    void inorder() {
        inorder(root);
        cout << '\n';
    }
}; 

int main() {
    AVLTree tree;

    tree.insert(10);
    tree.insert(20);
    tree.insert(30);
    tree.insert(40);
    tree.insert(50);
    tree.insert(25);

    cout << "AVL Tree inorder: ";
    tree.inorder();

    return 0;
}