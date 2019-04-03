#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> a;
	string command;
	while (true) {
		cin >> command;
		if (command == "push") {
			int num;
			cin >> num;
			a.push_back(num);
			cout << "ok" << endl;
		} else if (command == "pop") {
			int last = a.size() - 1;
			cout << a[last] << endl;
			a.pop_back();
		} else if (command == "back") {
			int last = a.size() - 1;
			cout << a[last] << endl;
		} else if (command == "size") {
			cout << a.size() << endl;
		} else if (command == "clear") {
			a.clear();
			cout << "ok" << endl;
		} else if (command == "exit") {
			cout << "bye" << endl;
			return 0;
		} else {
			cout << "Invalid command!";
		}
	}
}
