#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void quickSort(vector<int> &a, int l, int r) {
	if (l >= r) {
		return;
	}
	int i = l - 1;
	int j = r + 1;
	int pivot = a[rand() % (r - l + 1) + l];
	while(true) {
		do {
			i++;
		} while (a[i] < pivot);
		do {
			j--;
		} while (a[j] > pivot);
		if (i >= j) {
			break;
		}
		swap(a[i], a[j]);
	}
	quickSort(a, l, j);
	quickSort(a, j+1, r);
		
}

int main() {
	int aSize;
	cin >> aSize;
	vector<int> a(aSize);
	for (int i = 0; i < aSize; i++) {
		cin >> a[i];
	}
	quickSort(a, 0, aSize - 1);
	for (int i = 0; i < aSize; i++) {
		cout << a[i] << " ";
	}
}
