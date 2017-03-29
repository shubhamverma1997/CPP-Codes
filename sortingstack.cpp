#include<iostream>
using namespace std;
class Stack{
	Node<T>*head;
public:
	Stack(){
		head = NULL;
	}
	void push_back(T data){
		Node<T>*n = new Node<T>(data);
		n->next = head;
		head = n;
	}

	void pop_back(){
		Node<T>*temp = head->next;
		delete head;
		head = temp;
	}

	T top(){
		if(head!=NULL)
			return head->data;
	}
	bool isEmpty(){
		return head==NULL?true:false;
	}

	~Stack(){
		//Write yourself.
	}

};
int main()
{}
