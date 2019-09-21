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
	void showList();
	void addBack(int);

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


void List::showList() {
	if (head == NULL)
		cout << "-1" << endl;
	else {
		Node* tmp = head;
		cout << tmp->elem;
		while (tmp->next != NULL) {
			cout << " " << tmp->next->elem;
			tmp = tmp->next;
		}
	}
}

void List::addBack(int x) {
	Node* addN = new Node;
	if (head == NULL) {
		addN->elem = x;
		head = tail = addN;
	}
	else {
		addN->elem = x;
		tail->next = addN;
		tail = addN;
		tail->next = NULL;
	}
}



int main() {
	int Count;
	int Num1;
	int Num2;

	List list;
	string s1 ;
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

		else if (s1 == "showList") {
			list.showList();
		}
		else if(s1 == "addBack") {
			cin >> Num2;
			list.addBack(Num2);
		}

	}

	return 0;
}