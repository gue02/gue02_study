#include <iostream>

using namespace std;

struct Node{
	int data;
	Node* next;
};

class Stack{
	Node* topNode;
	
	public:
	Stack(){
		topNode = nullptr;
	}
	
	void push(int x){
		Node* newNode = new Node{x, topNode};
		topNode = newNode;
	}
	void pop(){
		if (topNode == nullptr) return;
		
		Node* temp = topNode;
		topNode = topNode->next;
		delete temp;
	}
	
	int top(){
		if (topNode == nullptr) return -1;
		return topNode->data;
	}
}
int main(){
    return 0;
}