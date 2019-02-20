#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int num[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j + 1 < n; j++) {
			if ( num[j] > num[j + 1]) {
				swap(num[j], num[j + 1]);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << num[i] << " ";
	}
}
