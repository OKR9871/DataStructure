#include<iostream>
#include<string>
using namespace std;

class Node {
public:
	int elem;
	Node* next;

	Node();
};
Node::Node() {
	next = NULL;
}

class List {
public:
	Node* head;
	Node* tail;

	List();
	void addFront(int);
	void removeFront();
	void front();
	void empty();

};

List::List() {
	head = NULL;
	tail = NULL;
}

void List::addFront(int x) {
	Node* addN = new Node;
	if (head == NULL) {
		addN->elem = x;
		head = tail = addN;
	}
	else {
		addN->elem = x;
		addN->next = head;
		head = addN;
	}
}

void List::removeFront() {
	if (head == NULL)
		cout << "-1" << endl;
	else {
		Node* remove = head;
		int num = remove->elem;
		head = remove->next;
		delete remove;
		cout << num << endl;
	}
}

void List::front() {
	if (head == NULL)
		cout << "-1" << endl;
	else
		cout << head->elem << endl;
}

void List::empty() {
	if (head == NULL)
		cout << "1" << endl;
	else
		cout << "0" << endl;
}



int main() {
	int Count=0;
	int Num1=0;

	List list;
	string s1;
	cin >> Count;

	 
	for (int i = 0; i < Count; i++) {
		cin >> s1;
		if (s1 == "addFront") {
			cin >> Num1;
			list.addFront(Num1);
		}

		else if (s1 == "removeFront") {
			list.removeFront();
		}

		else if (s1 == "front") {
			list.front();
		}

		else if (s1 == "empty") {
			list.empty();
		}

	}

	return 0;
}