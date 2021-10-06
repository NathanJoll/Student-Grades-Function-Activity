// Student-Grades-Function-Activity.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float StudentInput();

int main()
{
	int i, total[5];
	for (i = 0; i < 5; i++) {
		total[i] = StudentInput();
		cout << "\nThe total grade is: " << total[i] << endl;
		cout << "\nThe average grade is: " << total[i] / 2 << endl;
	}
}

float StudentInput() {
	string name;
	float grade1, grade2, total;
	cout << "\nEnter the name of student: ";
	cin >> name;
	cout << "\nEnter grade1 ";
	cin >> grade1;
	cout << "\nEnter grade2 ";
	cin >> grade2;
	total = grade1 + grade2;
	cout << "\nThe Student's name is: " << name << endl;
	cout << "\nGrade1 is: " << grade1 << endl;
	cout << "\nGrade2 is: " << grade2 << endl;
	return (total);
}
