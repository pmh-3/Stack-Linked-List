//Heitkemper, Peter
//pa2.cpp 
//Driver program

#include "recursiveStack.h"

int main() {
	
	RecursiveStack a;
	RecursiveStack s = a;
	s = a; 
	
	cout << "isEmpty returns: " << s.isEmpty() << endl;
	s.sumOdd();
	cout << "Push 1, 2, 3, 4" << endl;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);

	cout << "Top value: " << s.top() << endl;
	cout << "Calling pop..." << endl;
	s.pop();
	cout << "Top value after pop: " << s.top() << endl;

	cout << "Elements on the stack after pop are: " << endl;
	s.print();


	s.recShift();
	cout << "Elements on the stack after shift are:" << endl;
	s.print();

	cout << endl;
	cout << endl;

	cout << "Sum of odd elements: " << s.sumOdd() << endl;

	//Needs work
	cout << "Pop until 3 is reached, return true only if in list: " << s.popTill(3) <<endl;

	cout << "Elements on the stack after poptill are: " << endl;
	s.print();

	return 0;
}
