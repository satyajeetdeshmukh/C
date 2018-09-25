/* Defn: A list with the restriction that insertion and deletion 
can be only performed from one end called the top
Operations:
	1. Push(x)
	2. Pop()
	3. Top()
	4. IsEmpty()
It is a last in first out (LIFO) data structure.
Applications:
	Function Calls/Recursion
	Undo operation in any sort of editor
	Balanced Parentheses
We can implement stacks using arrays and linked lists.
*/

#include<iostream>

//using arrays
int A[10];
int top = -1; //empty stack

void push(int x) {
	if (top != 9) {
		A[++top] = x;
	}
	else std::cout << "Error: Stack is full.";
}

void pop() {
	if (top != -1) {
		top--;
	}
	else std::cout << "Error: Stack is empty.";
}

int givetop() {
	return A[top];
}

void print() {
	for (int i = 0; i <= top; i++) {
		std::cout << A[i] << "\t";
	}
	std::cout << "\n";
}

int main() {
	push(3); print();
	push(7); print();
	push(55); print();
	pop(); print();
	system("pause");
	return 0;
}

