#pragma once
#include<String>
#include "gender.h"
using namespace std;
#define COUNT_MARKS 2


struct student {
	string firstName;
	string lastName;
	gender gender;
	int yearBirth;
	int yearAdmission;
	int* phisMark;
	int* mathMark;
	int* infoMark;
};

void inputMarks(int* marks, int count);
void inputStudent(student* s);
void outputStudent(student s);
//void changeMark(student* student);