#include"stdafx.h"
using namespace std;

int* allocateMemory(int size) {
	int* pointer;
	pointer = new int[size];
	return pointer;
}