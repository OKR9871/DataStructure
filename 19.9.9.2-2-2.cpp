#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int arr[10000] = { 0 };
	int Korea = 0;
	int CountK = 0;
	int Japan = 0;
	int CountJ = 0;
	int China = 0;
	int CountC = 0;
	float midK = 0;
	float midJ = 0;
	float midC = 0;
	int Num;
	int Client;

	cin >> Num;

	for (int i = 0; i < Num; i++) {
		cin >> Client;

		for (int j = 0; j < Client; j++) {
			cin >> arr[j];
		}

		for (int k = 0; k < Client; k++) {

			if (k % 3 == 0) {
				Korea = Korea + arr[k];
				if (arr[k] != 0)
					CountK++;
			}

			else if (k % 3 == 1) {
				Japan = Japan + arr[k];
				if (arr[k] != 0)
					CountJ++;
			}

			else if (k % 3 == 2) {
				China = China + arr[k];
				if (arr[k] != 0)
					CountC++;
			}
			else {
				Korea = Korea + arr[k];
				if (arr[k] != 0)
					CountK++;
			}
		}
		midK = Korea / CountK;
		midJ = Japan / CountJ;
		midC = China / CountC;
		cout << Korea << " " << Japan << " " << China << endl;
		cout << floor(midK) << " " << floor(midJ) << " " << floor(midC) << endl;

		Korea = 0;
		CountK = 0;
		Japan = 0;
		CountJ = 0;
		China = 0;
		CountC = 0;
		midK = 0;
		midJ = 0;
		midC = 0;
	}
	return 0;



}