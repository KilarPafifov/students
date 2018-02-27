#pragma once
#include "student.h"


struct group
{
	int sizeOfGroup;
	student* students;
	int id;
};

group inputGroup(int sizeOfGroup, int id);
void outputGroup(group group);
