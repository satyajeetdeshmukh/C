#include<iostream>

using namespace std;

class Node {
	int data;
	Node *link;
	public:
		void fill(int x, Node *y) {
			data = x;
			link = y;
		}
		Node* givelink() {
			return link;
		}
		int givedata() {
			return data;
		}
};

Node *top = NULL;

void push(int x) {
	Node* temp = new Node;
	temp->fill(x, top);
	top = temp;
}

void pop() {
	Node* temp = top;
	top = top->givelink();
	delete(temp);
}

void print() {
	Node* p = top;
	while (p != NULL) {
		cout << p->givedata() << "\t";
		p = p->givelink();
	}
	cout << "\n";
}

int main() {
	push(3); print();
	push(4); print();
	push(9); print();
	pop(); print();
	push(7); print();
	push(11); print();
	pop(); print();
	pop(); print();
	system("pause");
}