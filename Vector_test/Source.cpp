#include<iostream>
#include<vector>

using namespace std;


void main() {
	vector<int> my_vector{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	my_vector.push_back(10);

	for (int digit : my_vector) {
		cout << "[ " << digit << " ]";
	}
	cout << endl;
	my_vector.pop_back();
	my_vector.at(5) = 14;

	for (int digit : my_vector) {
		cout << "[ " << digit << " ]";
	}
	string phoneNumber;
	cout << endl;

}