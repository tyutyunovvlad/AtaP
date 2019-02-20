#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int element[n];
	for (int i = 0; i < n; i++) {
		cin >> element[i];
	}
	int x;
	cin >> x;
	int counter = 0;
	for (int i = 0; i < n; i++) {
		if ( element[i] == x) {
			counter++;
		}
	}
	cout << counter;
}
