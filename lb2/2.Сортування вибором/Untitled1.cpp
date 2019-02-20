#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int num[n];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n - 1; i++) {
		int max = n - i - 1;
		for (int j = n - i - 1; j > 0; j--) {
			if (num[j-1] > num[max]) {
				max = j-1;
			}
		}
		swap(num[n - i - 1], num[max]);
	}
	for (int i = 0; i < n; i++) {
		cout << num[i] << " ";
	}
}





// 2
// 3 2
