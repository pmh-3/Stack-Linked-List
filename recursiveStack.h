//Heitkemper, Peter
//recursiveStack.h
//completed 2.5.21

//DESCRIPTION: This code implements a stack ADT with a linked list. Accessory functions are
//implemented recursivly with the aid of helper functions. 

//ASSUMPTIONS: This stack is meant to be used with intgers.

//SOURCES: Prof. Kong

#include <iostream>
using namespace std;

class RecursiveStack {
public:
	
	RecursiveStack(); //constructor decleration
	~RecursiveStack() {}; //destructor

	void pop();
	void push(int val);
	int top();
	bool isEmpty();

	//Recursive functions below

	//returns the sum of each element at odd (1st, 3rd, 5th, etc.) nodes. 
	int sumOdd() {
		
		return(sumOddHelper(head));
		
	};

	//pops all values before x and returns whether x is in the list. 
	bool popTill(int x) {
		return popTillHelper(head, x);
	}

	//shifts all the elements in the linked list to the next node. The first element
	//is duplicated, and the last element is moved out of the array.
	void recShift() {

		recShiftHelper(head);

		Node* temp = new Node();
		temp->data = head->data;    //duplicate first node
		temp->link = head;
		temp = head;

		
	}
	//prints the stack with comma separated values, recursivly, with no trailing comma.
	void print() {					
		printHelper(head);
	}

private:
	struct Node
	{
		int data;
		struct Node* link;
	};
	void printHelper(Node* head);
	void recShiftHelper(Node*& head);
	int sumOddHelper(Node* head);
	bool popTillHelper(Node* head, int x);

	int x;
	int val;
	Node* head;
};