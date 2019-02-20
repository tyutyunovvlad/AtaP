#include <iostream>

using namespace std;

int main() {
	int m, n;
	cin >> n >> m;
	int arrN[n];
	int arrM[m];
	for (int i = 0; i < n; i++) {
		cin >> arrN[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> arrM[i];
		for (int j = 0; j < n; j++) {
			if (arrM[i] == arrN[j]) {
				cout << j+1 << " ";
				int k = 1;
				while (arrM[i] == arrN[j+k]) {
					k++;
				}
				cout << j+k << endl;
				break;
			}
			else if (j == n-1) {
				cout << 0 << "\n";
			}
			
		}
	}
	
	
}


// 1 2 2 2 3





//for (int i = 0; i < m; i++) {
//		cin >> arrM[i];
//		int start = 0;
//		int end = n - 1;
//		while (start <= end) {
//			int middle = (start + end) / 2;
//			if (arrM[i] > arrN[middle]) {
//				start = middle + 1;
//			} else if (arrM[i] < arrN[middle]) {
//				end = middle - 1;
//			} else {
//				int j = 0;
//				while (arrM[i] == arrN[i - j]) {
//					j++;
//				}
//				cout << middle-j << " ";
//				int k = 0;
//				while (arrM[i] == arrN[i + k]) {
//					k++;
//				}
//				cout << middle + k << " ";
//				break;
//			}
//		}
//	}
