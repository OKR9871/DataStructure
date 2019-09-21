#include <iostream>
#include <string>
using namespace std;


class Array {
private:
	int n; // 배열에 내가 입력한 갯수
	int size; // 배열 크기
	int* arr; // 배열

public:
	Array(int size) {
		this->n = 0;
		this->arr = new int[size];
		this->size = size;
		for (int i = 0; i < size; i++) {
			arr[i] = 0;
		}
	}

	int at(int idx) {
		if (arr[idx] == 0) return 0;
		else return arr[idx];
	}

	void set(int idx, int X) {
		if (arr[idx] == 0) cout << "0\n";
		else arr[idx] = X;
	}
	void add(int idx, int num) {
		if (arr[idx] == 0) {
			arr[n++] = num;
		}
		else {
			for (int i = n; i >= idx + 1; i--) arr[i] = arr[i - 1];
			arr[idx] = num;
			n++;
		}
	}
	void remove(int idx) {
		if (arr[idx] == 0) cout << "0\n";
		else {
			cout << arr[idx] << '\n';
			for (int i = idx; i < n; i++) arr[i] = arr[i + 1];
		}
	}
	void print() {
		if (n == 0) cout << "0\n";
		else {
			for (int i = 0; i < n; i++) {
				cout << arr[i] << " ";
			}
			cout << '\n';
		}
	}
};
int main() {
	Array arr(10000);

	int m;
	cin >> m;
	string s;
	int idx, x;
	for (int i = 0; i < m; i++) {
		cin >> s;
		if (s == "at") {
			cin >> x;
			cout << arr.at(x) << endl;
		}
		else if (s == "add") {

			cin >> idx >> x;
			arr.add(idx, x);
		}
		else if (s == "set") {
			cin >> idx >> x;
			arr.set(idx, x);

		}
		else if (s == "remove") {
			cin >> idx;
			arr.remove(idx);
		}
		else if (s == "printArray") {
			arr.print();
		}
	}


	return 0;
}