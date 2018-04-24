#include <random>
#include <ctime>
#include <iostream>
#include <string>
#include "Utility.h"

using namespace std;

int roll(int di) {
	default_random_engine generator((int)time(NULL));
	uniform_int_distribution<int> dice(1, di);
	return dice(generator);
}

int getStatMod(int stat) {
	if (stat >= 28)
		return 9;
	else if (stat >= 26 && stat < 28)
		return 8;
	else if (stat >= 24 && stat < 26)
		return 7;
	else if (stat >= 22 && stat < 26)
		return 6;
	else if (stat >= 20 && stat < 22)
		return 5;
	else if (stat >= 18 && stat < 20)
		return 4;
	else if (stat >= 16 && stat < 18)
		return 3;
	else if (stat >= 14 && stat < 16)
		return 2;
	else if (stat >= 12 && stat < 14)
		return 1;
	else if (stat >= 10 && stat < 12)
		return 0;
	else if (stat >= 8 && stat < 10)
		return -1;
	else if (stat >= 6 && stat < 8)
		return -2;
	else if (stat >= 4 && stat < 6)
		return -3;
	else if (stat >= 2 && stat < 4)
		return -4;
	else if (stat >= 0 && stat < 2)
		return -5;
	else if (stat >= -2 && stat < 0)
		return -6;
	else if (stat >= -4 && stat < -2)
		return -8;
	else if (stat >= -6 && stat < -4)
		return -9;
	else
		return -10;
}

int getPositiveInt(string prompt, int maxValue) {
	string userInput;
	int number = 0;
	do {
		cout << prompt;
		cin >> userInput;
		try {
			number = stoi(userInput);
		}// end try
		catch (invalid_argument) {
			cout << "Invalid entry typed.";
		}// end catch
	} while (number < 1 || number > maxValue);
	return number;
}

int getPositiveIntOrGoBack(string prompt, int maxValue) {
	string userInput;
	int number = 0;
	do {
		cout << prompt;
		cin >> userInput;
		try {
			number = stoi(userInput);
		}// end try
		catch (invalid_argument) {
			cout << "Invalid entry typed.";
		}// end catch
	} while ((number < 1 && number != -1) || number > maxValue);
	return number;
}