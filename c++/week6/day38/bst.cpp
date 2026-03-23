#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int n){
        data = n;
        left = nullptr;
        right = nullptr;
    }
};
Node* insert(Node* root, int value){
    if(root == nullptr)
        return new Node(value);
    
    if(value < root->data){
        root -> left = insert(root->left, value);
    }
    else(value > root->data){
        root -> right = insert(root->right, value);
    }
    return root;
}

Node* findMin(Node* root){
    while (root && root->left != nullptr){
        root = root->left;
    }
    return root;
}
Node* deleteNode(Node* root, int value){
    if (root == nullptr)
        return nullptr;
    if (value < root->data){
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data){
        root->right = deleteNode(root->right, value);
    }
    else {
        if(root->left == nullptr && root -> right == nullptr){
            delete root;
            return nullptr;
        }
        else if(root->left == nullptr){
            Node* temp = root ->left;
            delete root;
            return temp;
        }
        else {
            Node* successor = findMin(root -> right);
            root->data = successor -> data;
            root -> right = deleteNode(root->right, successor->data);
        }
    }
    return root;
}
void inorder (Node* root){
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}