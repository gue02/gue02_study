#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
};

void push_back(Node* head, int x){
    Node* cur = head;

    while(cur->next != nullptr){
        cur = cur->next;
    }
    cur->next = new Node{x, nullptr};
}

void printList(Node* head){
    Node* cur = head;

    while(cur != nullptr){
        cout << cur->data << " ";
        cur = cur->next;
    }

    cout << "\n";
}

int main(){
    Node* head = new Node{10,nullptr};
    push_back(head,20);
    push_back(head,30);
    push_back(head,40);

    printList(head);
    return 0;
}