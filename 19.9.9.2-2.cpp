#include <iostream>
using namespace std;

int main()
{
	int arr[10000] = { 0 };
	int Korea = 0;
	int Japan = 0;
	int China = 0;
	int Num;
	int Client;

	cin >> Num;

	for (int i = 0; i < Num; i++) {
		cin >> Client;

		for (int j = 0; j < Client; j++) {
			cin >> arr[j];
		}

		for (int k = 0; k < Client; k++) {
		
			if (k % 3 == 0) 
				Korea = Korea + arr[k];
			

			else if (k % 3 == 1) 
				Japan = Japan + arr[k];
			

			else if (k % 3 == 2)
				China = China + arr[k];

			else
				Korea = Korea + arr[k];
		}

		cout << Korea << " " << Japan << " " << China << endl;

		Korea = 0;
		Japan = 0;
		China = 0;
	}



}