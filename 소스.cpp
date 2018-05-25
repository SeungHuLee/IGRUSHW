#include <iostream>

using namespace std;

int main() {
	int testCase;
	int index = 0;
	int arr[100];
	cin >> testCase;
	
	for (int i = 0; i < 100; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i < testCase; i++) {
		int temp = 0;
		int numbers = 0;
		
		cin >> temp;
		for (int j = 0; j < temp; j++) {
			cin >> numbers;
			arr[i] += numbers;
		}
	}
	for (int i = 0; i < testCase; i++) {
		cout << arr[i] << endl;
	}

}