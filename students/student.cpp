#include "stdafx.h"
using namespace std;

void  inputMarks(int* marks, int count) {
	for (int i = 0; i < count; i++) {
		cout << i + 1 << " mark: ";
		cin >> marks[i];
	}
}

void fillMarks(int* marks) {
	cout << "input count of marks: ";
	int countMarks;
	cin >> countMarks;

	marks = allocateMemory(countMarks);
	cout << "input marks: " << endl;
	inputMarks(marks, countMarks);
}

void inputStudent(student* s) {
	cout << "input first name: ";
	cin >> s->firstName;
	cout << "input larst name: ";
	cin >> s->lastName;
	cout << "input gender (0-male, 1-female): ";
	int gender;
	cin >> gender;
	if (gender == 0) {
		s->gender = male;
	}
	else if (gender == 1) {
		s->gender = female;
	}
	cout << "input year of birth: ";
	cin >> s->yearBirth;
	cout << "input year of admission: ";
	cin >> s->yearAdmission;

	cout << "phisics : ";
	fillMarks(s->phisMark);

	cout << " comp-science : ";
	fillMarks(s->infoMark);

	cout << " math : ";
	fillMarks(s->mathMark);

}
;
void outputStudent(student s) {
	cout << "first name : " << s.firstName << endl;
	cout << "last name :" << s.lastName << endl;
	if (s.gender == male) {
		cout << "gender is : " << "male" << endl;
	}
	else if (s.gender == female) {
		cout << "gender is : " << "female" << endl;
	}
	cout << "year of birth: " << s.yearBirth << endl;
	cout << "year of admission: " << s.yearAdmission << endl;
	cout << "marks of phisics : ";
	for (int i = 0; i < COUNT_MARKS; i++) {
		cout << s.phisMark[i] << " , ";
	}

	cout << endl << "marks of math : ";
	for (int i = 0; i < COUNT_MARKS; i++) {
		cout << s.mathMark[i] << " , ";
	}

	cout << "marks of comp-science : ";
	for (int i = 0; i < COUNT_MARKS; i++) {
		cout << s.infoMark[i] << " , ";
	}
	cout << endl;
}
//void changeMark(student* student) {
	// cout << student->lastName;
//}
