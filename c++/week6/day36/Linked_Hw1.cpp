#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void printList(Node* head){
    Node* start = head;

    while(start != nullptr){
        cout << start->data << " ";
        start = start->next;
    }
    cout << endl;
}

void push_back(Node* head, int x){
    Node* cur = head;
    while(cur->next != nullptr)
        cur = cur->next;

    cur->next = new Node{x,nullptr};
}

Node* deleteValue(Node* head, int x){

    if(head == nullptr)
        return nullptr;

    if(head->data == x){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* cur = head;

    while(cur->next != nullptr){
        if(cur->next->data == x){
            Node* temp = cur->next;
            cur->next = temp->next;
            delete temp;
            return head;
        }

        cur = cur->next;
    }

    return head;
}

int main(){
    Node* head= new Node{10,nullptr};

    push_back(head, 20);
    push_back(head, 30);
    push_back(head, 40);
    push_back(head, 50);

    printList(head);

    head = deleteValue(head, 30);

    printList(head);
    return 0;
}