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
	~List();

	void addBack(int);
	void Delete(int);
	void showList();

};

List::List() {
	head = NULL;
	tail = NULL;
}
List::~List() {}

void List::showList() {
	if (head == NULL)
		cout << "-1" << endl;
	else {
		Node* tmp = head;
		cout << tmp->elem << " ";
		while (tmp->next != head) {
			cout << tmp->next->elem << " ";
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
		tail->next = head;
	}
}

void List::Delete(int x) {
	Node* tmp = head;
	Node* remove = new Node;
	remove = head;
	
	if (x == 0) {
		remove = head;
		tail->next = remove->next;
		head = remove->next;
		delete remove;
	}
	else {
		for (int j = 0; j < x - 1; j++) {
			remove = remove->next;
		}

		for (int k = 0; k < x + 1; k++) {
			tmp = tmp->next;
		}

		if (remove->next == tail) {
			tail = remove;
		}
		else if (remove->next == head) {
			head = tmp;
		}
		remove->next = tmp;
	}
	

}



int main() {
	int DNum = 0;
	int Num = 0;
	int num = 0;
	string s1="";
	List list;
	cin >> Num;
	for (int j = 0; j < Num; j++) {
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
		list.~List();
	}
	return 0;
}