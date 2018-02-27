// MainApp.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	int size;
	int id;
	group firstGroup;
	cout << "put size of group :";
	cin >> size;
	cout << "put id ";
	cin >> id;
	firstGroup = inputGroup(size, id);
	outputGroup(firstGroup);
	outputStudent(getBestStudent(firstGroup));

	system("pause");

    return 0;
}

