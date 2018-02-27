#include "stdafx.h"

group inputGroup(int sizeOfGroup, int id) {
	group group;
	group.id = id;
	group.students = new student[sizeOfGroup];
	group.sizeOfGroup = sizeOfGroup;
	
	for (int i = 0; i < sizeOfGroup; i++) {
		inputStudent(&group.students[i]);
	}
	return group;
}

void outputGroup(group group) {
	cout << "group id : " << group.id;
	for (int i = 0; i < group.sizeOfGroup; i++) {
		outputStudent(group.students[i]);
		
	}
}

