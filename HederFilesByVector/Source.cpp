#include<iostream>
#include"StudentVector.h"
#include<vector>

using namespace std;

void main() {
	Student student;
	vector<Student> group;
	bool exit = false;
	do {
		cout << "Select an action:\n1.Add a student.\n2.Displaying the list of students.\n3.Print student grades.\n4.Print of debtors.\n0.Exit." << endl;
		int chois;
		cin >> chois;
		switch (chois) {
		case 1: {
			student.AddNewStudent();
			group.push_back(student);
			break;
		}
		case 2: {
			system("cls");
			for (Student show : group) {
				show.ShowStudent();
			}
			break;
		}
		case 3: {
			system("cls");
				string wanted_name;
				cout << "Enter wanted name: ";
				cin >> wanted_name;
				for (Student search:group) {
					if (search.name== wanted_name) {
						cout << "Grades of " << search.name << " is ";
						for (int grade:search.grades) {
							cout << "|" <<grade;
						}
						cout << "|" << endl;
					}
				}
				break;
			}		
		case 4: {
			system("cls");
				for (Student debtor:group) {
					if (debtor.position == "Debtor") {
						debtor.ShowStudent();
					}
				}
			break;
		}
		case 0: {
			exit = true;
		}
		}
	} while (!exit);
}