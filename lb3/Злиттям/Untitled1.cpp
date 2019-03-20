#include <iostream>
#include <vector>

using namespace std;

	vector<int> res;

void mergeSort(vector<int> &a, int l, int r) {
	if (l == r) {
		return;
	}
	int m = (l + r) / 2;
	mergeSort(a, l, m);
	mergeSort(a, m+1, r);
	int aPointer = l;
	int bPointer = m + 1;

	for (int i = 0; i < r - l + 1; i++) {
		if ((aPointer <= m) && ((bPointer > r) || (a[aPointer] < a[bPointer]))) {
			res.push_back(a[aPointer]);
			aPointer++;
		} else {
			res.push_back(a[bPointer]); 
			bPointer++;
		}
	}
	for (int i = 0; i < res.size(); i++) {
		a[i + l] = res[i];
	}
}

int main() {
	int aSize;
	cin >> aSize;
	vector<int> a(aSize);
	for (int i = 0; i < aSize; i++) {
		cin >> a[i];
	}
	mergeSort(a, 0, aSize-1);
	for (int i = 0; i < aSize; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}





// 4 1 3 2 
