// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double average;
	int sum = 0;
	int count = 0;
	int* score = new int[3];
	int* scoreFinal = new int[3];
	
	for (int i = 0; i < 3; ++i) {
		cout << "Please input your score?" << endl;
		cin >> score[i];
	}

	for (int i = 0; i < 3; ++i) {
		if (0 <= score[i] && score[i] <= 100) {
			scoreFinal[count] = score[i];
			count++;
		}
	}
	for (int i = 0; i < count; ++i) {
		sum += scoreFinal[i];
	}
	if (count != 0) {
		average = sum / count;
	}
	else {
		average = 0.0;
	}
	cout << "Average is:" << average << endl;

	delete[]score;
	delete[]scoreFinal;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
