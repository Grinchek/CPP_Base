#include <iostream>
#include<vector>
#include<string>
using namespace std;

void main() {
	vector<string> list;
	for (int i = 0; i < 4; i++) {
		string input;
		getline(cin, input);
		list.push_back(input);
	}
	cout << "==========================================" << endl;
	for (auto varible : list) {
		cout << varible << endl;
	}
	for (int i = 0; i < 4; i++) {
		string temp ;
		for (int j = 0; j < 4; j++) {
			if (list[i] < list[j]) {
				temp = list[j];
				list[j] = list[i];
				list[i] = temp;
			}
		}
	}
	cout << "==========================================" << endl;
	for (auto variable : list) {
		cout <<variable << endl;
	}


}