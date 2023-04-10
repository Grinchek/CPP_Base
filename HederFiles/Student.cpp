#include"Student.h"
#include<iostream>

using namespace std;
void Student::AddNewStudent() {
	
	cout << "Enter name "; cin >> name;
	cout << "Enter surname "; cin >> surname;
	cout << "Enter age "; cin >> age;
	cout << "Enter grades:" << endl;
	for (int i = 0; i < 5;i++) {
		cout << subjects[i] << ": "; cin >> grades[i];
	}
	int temp=0;
	for (int grade : grades) {

		temp+= grade;
	}
	midle_grade = (temp / 5);
	if (midle_grade < 7) {
		position = "Debtor";
	}
	else if (midle_grade >= 7 && midle_grade  < 10) {
		position = "Satisfactory";
	}
	else if(midle_grade >= 10) {
		position = "Exellent";
	}
}
void Student::ShowStudent() {
	cout<<"Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Age: " << age << endl;
	cout << "Grades:" << endl;
	for (int grade : grades) {
		cout << "|" << grade ;
	}
	cout << '|'<<endl;

}

