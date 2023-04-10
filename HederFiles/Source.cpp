#include<iostream>
#include"Student.h"

using namespace std;

void main() {
	int student_size = 1;
	Student* group=nullptr;
	Student* temp_group = nullptr;
	group = new Student[student_size];
	bool exit = false;
	cout << "To get sterted, create first student." << endl;
	group[0].AddNewStudent();
	do {
		cout << "Select an action:\n1.Add a student.\n2.Displaying the list of students.\n3.Print student grades.\n4.Print of debtors.\n0.Exit." << endl;
		int chois;
		cin >> chois;
		switch (chois) {
		case 1: {
				student_size++;
				temp_group = new Student[student_size];
				for (int i = 0; i < student_size - 1; i++) {
					temp_group[i] = group[i];
				}
				temp_group[student_size - 1].AddNewStudent();
				group = temp_group;
			

			break;
			delete[] temp_group;
		}
		case 2: {
			system("cls");
			if (student_size >0)
				for (int i = 0; i < student_size; i++) {
					group[i].ShowStudent();
				}
			else {
				cout << "The list is empty." << endl;
			}
			break;
		}
		case 3: {
			system("cls");
			if (student_size > 1) {
				string wanted_name;
				cout << "Enter wanted name: ";
				cin >> wanted_name;
				for (int i = 0; i < student_size; i++) {
					if (group[i].name == wanted_name) {
						cout << "Grades of " << group[i].name << " is ";
						for (int j = 0; j < 5; j++) {
							cout << "|" << group[i].grades[j];
						}
						cout << "|" << endl;
					}
				}
			}
			else {
				cout << "The list is empty." << endl;
			}
			break;
		}
		case 4: {
			system("cls");
			if (student_size > 1) {
				for (int i = 0; i < student_size; i++) {
					if (group[i].position=="Debtor") {
						group[i].ShowStudent();
					}
				}
			}
			else {
				cout << "The list is empty." << endl;
			}
			break;			
		}
		case 0: {
			exit = true;
		}
		}
	} while (!exit);



	delete[] group;
}