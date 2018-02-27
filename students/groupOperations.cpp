#include "stdafx.h"

student getBestStudent(group group) {
	if (group.sizeOfGroup <= 0) {
		cout << "illegal size of group!";
	}

	float bestAvgMark = 0;
	float tempAvgMark = 0;
	int indexOfBestStudent = NULL;

	for (int i = 0; i < group.sizeOfGroup; i++) {

		for (int j = 0; j < COUNT_MARKS; j++) {

			tempAvgMark += group.students[i].infoMark[j];
			tempAvgMark += group.students[i].phisMark[j];
			tempAvgMark += group.students[i].mathMark[j];
		}

		tempAvgMark /= COUNT_MARKS * 3;

		if (tempAvgMark > bestAvgMark) {
			bestAvgMark = tempAvgMark;
			indexOfBestStudent = i;
		}
	}

	return group.students[indexOfBestStudent];
}
