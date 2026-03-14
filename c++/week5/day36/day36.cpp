#include <iostream>
#include <string>

using namespace std;

struct Node{
    int data;
    Node* next;
};

void printList(Node* head){
    Node* cur = head;
    while(cur != nullptr){
        cout << cur->data << " ";
        cur = cur->next;
    }
}

Node* insertFront(Node* head, int x){
    Node* newNode = new Node{x,head};
    return newNode;
}

void insertBack(Node* head, int x){
    Node* cur = head;

    while(cur->next != nullptr)
        cur = cur->next;

    cur->next = new Node{x,nullptr};
}

void deleteNode(Node* head, int x){
    Node* cur = head;

    while(cur->next != nullptr)
    {
        if(cur->next->data == x)
        {
            Node* temp = cur -> next;
            cur->next = temp -> next;
            delete temp;
            return;
        }

        cur = cur->next;
    }
}
int main(){
    Node* head = new Node{10, nullptr};

    Node* n1 = new Node{20,nullptr};
    head->next = n1;

    Node* n2 = new Node{30,nullptr};
    n1->next = n2;

    printList(head);
    return 0;
}