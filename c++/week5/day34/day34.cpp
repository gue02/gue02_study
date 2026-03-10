#include <iostream>
#include <queue>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};
void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* cur = q.front();
        q.pop();
        cout << cur->data << " ";
        if(cur->left){
             q.push(cur->left);
        }
           
        if(cur->right){
            q.push(cur->right);
        }
    }
}
int main(){
    Node root;
    root.data = 1;
}
