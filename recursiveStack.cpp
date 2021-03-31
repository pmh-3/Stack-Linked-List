//implementing recurisveStack

#include "recursiveStack.h"

RecursiveStack::RecursiveStack() : x{  }, val{  }, head{nullptr} {}     

void RecursiveStack::push(int val) {   
    Node* temp = new Node();
    temp->data = val;
    temp->link = head;
    head = temp;
}

void RecursiveStack::pop(){
    if (head == NULL)
    {
        cout << "Stack is empty" << endl;
    }else{
        Node* temp = head;              
        head = head->link;      // head moves down to next node

        temp->link = NULL;  //un-link
        delete temp;        //deallocate
    }
}

int RecursiveStack::top(){
                                         // Check for empty stack 
    if (!isEmpty())
        return head->data;
    else {
        cout << "stack is empty" << endl;
        return 0;                          //appropriate return value?
    }
}

bool RecursiveStack::isEmpty() {
   bool X = (head) ? false : true;      
   return X;
}

void RecursiveStack::printHelper(Node* head) {
 
    if (isEmpty()) {
        cout << "stack is empty" << endl;
    }
    else if (head) { 
        cout << head->data;
        if (head->link) cout << ",";
        head = head->link;
        printHelper(head);
    }
    else {
        cout << endl;
    }
}

void RecursiveStack::recShiftHelper(Node*& head) {
    if (isEmpty()) 
        cout << "stack is empty" << endl;
    else {
        if (!head->link) {      //bottom of stack
            return;
        }
        else {
           recShiftHelper(head->link);
           head->link->data = head->data;         
        }
    }
}

int RecursiveStack::sumOddHelper(Node* head) {
  if (isEmpty()) {
    cout << "stack is empty" << endl;
    return -1;
  }
   else if (!(head->link)) {
         return head->data;
        }
   return head->data + sumOddHelper(head->link->link);
}

bool RecursiveStack::popTillHelper(Node* head, int x) {
   // Node* temp = new Node();
    //head = temp;

    if (isEmpty()) {
        cout << "stack is empty" << endl;
        return false;
       // cout << "break 4";
    }
    while(!head){
        if ((head->data) == x) {
            return true;
         //   cout << "break 3";
        }
        else {   
            popTillHelper(head->link, x);
            pop();
           // cout << "break 2";
        }
    }
   // cout << "break 1";
    return true;
}