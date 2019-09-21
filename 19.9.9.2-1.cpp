#include <iostream>
#include <string>
using namespace std;

class Array {
public:
	int n;
	int* arr;

	Array(int size) {
		this->n = 0;
		this->arr = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = 0;
		}
	}

	int at(int idx) {
		if (arr[idx] == 0) {
			return 0;
		}
		else
			return arr[idx];
	}

	void set(int idx, int X) {
		if (arr[idx] != 0) {
			arr[idx] = X;
		}

		else {
			cout << "0" << endl;
		}
	}

	void add(int idx, int num) {
		int count = 0;
		if (arr[0] == 0) {
			arr[0] = num;
		}

		else if (arr[idx] == 0) {
			for (int i = 0; i < idx; i++) {
				if (arr[i] != 0)
					count++;
				else if (arr[i] == 0)
					break;
			}

			arr[count] = num;
		}

		else {
			for (int i = 10000 - idx; i >= 0; i--) {
				if (idx + i + 1 >= 10000) {
					arr[9999] = arr[9998];
				}
				else
					arr[idx + i + 1] = arr[idx + i];
			}
			arr[idx + 1] = arr[idx];
			arr[idx] = num;
		}
	}

};

int main() {
	Array arr(10000);
	string s1;

	int N;
	int atN;
	int setN;
	int seti;
	int addN;
	int addi;

	cin >> N;

	if (N >= 1 && N <= 10000) {
		for (int i = 0; i < N; i++) {
			cin >> s1;
			if (s1 == "at") {
				cin >> atN;
				cout << arr.at(atN);
			}

			else if (s1 == "set") {
				cin >> seti >> setN;
				arr.set(seti, setN);
			}

			else if (s1 == "add") {
				cin >> addi >> addN;
				arr.add(addi, addN);
			}
		}
	}

	else
		cout << "1~10000 사이의 숫자를 입력해주세요" << endl;
}