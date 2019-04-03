#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> add;
	vector <int> sub;
	string command;
	while (true) {
		cin >> command;
		if (command == "push") {
			int num;
			cin >> num;
			add.push_back(num);
			cout << "ok\n";
		} else if (command == "pop") {
			if (sub.empty()) {
				int addSize = add.size();
				for (int i = 0; i < addSize; i++) {
					int last = add.size() - 1;
					sub.push_back(add[last]);
					add.pop_back();
				}
			} 
			cout << sub[sub.size() - 1] << endl;
			sub.pop_back();
		} else if (command == "front") {
			if (sub.empty()) {
				cout << add[0] << endl;
			} else {
				cout << sub[sub.size() - 1] << endl;
			}
		} else if (command == "size") {
			int size = add.size() + sub.size();
			cout << size << endl;
		} else if (command == "clear") {
			add.clear();
			sub.clear();
			cout << "ok\n";
		} else if (command == "exit") {
			cout << "bye\n";
			return 0;
		}
	}
}


/* 
1 2 3 4 5

*/
