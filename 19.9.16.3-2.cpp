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
	
	void addBack(int);
	void Delete(int);
	void showList();

};

List::List() {
	head = NULL;
	tail = NULL;
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
	Node* tmp = head;
	if (head == NULL) {
		addN->elem = x;
		head = tail = addN;
	}
	else {
		addN->elem = x;
		tail->next = addN;
		tail = addN;
		tail->next = head;
	}
}

void List::Delete(int x) {
	Node* tmp = head;
	Node* remove = new Node;
	for (int i = 0; i < x-1; i++) {
		tmp = tmp->next;
	}

	remove = tmp->next;
	tmp->next = remove->next;
	delete remove;
}



int main() {
	int Size = 10;
	int DNum = 0;
	int Num = 0;
	int num = 0;
	string s1;
	List list;

	cin >> Num;
	
		for (int i = 0; i < 10; i++) {
			cin >> num;
			list.addBack(num);
		}

		for (int i = 0; i < Num; i++) {
			cin >> s1;
				if (s1 == "Delete") {
				cin >> DNum;
				list.Delete(DNum);
			}
		}
	
	list.showList();
	return 0;
}