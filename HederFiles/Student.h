#pragma once
#include<iostream>
#include<string>

using namespace std;

struct Student {
	string name;
	string surname;
	string subjects[5] = { "Math","Language","History","Physics","Chemistry" };
	string position;
	int age;
	int grades[5];
	int midle_grade = 0;
	void AddNewStudent();
	void ShowStudent();

};
