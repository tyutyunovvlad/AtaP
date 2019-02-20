#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int arrN[n];
	int arrK[k];
	for (int i = 0; i < n; i++) {
		cin >> arrN[i];
	}
	for (int i = 0; i < k; i++) {
		cin >> arrK[i];
		bool res = false;
		int start = 0;
		int end = n - 1;
		while ( start <= end) {
			int middle = (start + end) / 2;
			if (arrK[i] > arrN[middle])
			{
				start = middle + 1;
			} else if ( arrK[i] < arrN[middle]) {
				end = middle - 1;
			}
			else {
				res = true;
				break;
				
			}
		}
		if (res) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
