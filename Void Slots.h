#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void switchCalulator(int c_slot1, int c_slot2, int c_slot3, string banana, string bonebroth, string pears);
void dollarsEarned(double C_dollars, int c_slot1, int c_slot2, int c_slot3, double C_total);








void switchCalulator(int c_slot1, int c_slot2, int c_slot3, string banana, string bonebroth, string pears) {
	switch (c_slot1)
	{
	case 1:
		cout << "You got " << banana << endl;
	case 2:
		cout << "You got " << bonebroth << endl;
		break;
	case 3:
		cout << "You got " << pears << endl;
		break;

	}
	switch (c_slot2)
	{
	case 1:
		cout << "You got " << bonebroth << endl;
	case 2:
		cout << "You got " << pears << endl;
		break;
	case 3:
		cout << "You got " << banana << endl;
		break;


	}
	switch (c_slot3)
	{
	case 1:
		cout << "You got " << pears << endl;
	case 2:
		cout << "You got " << banana << endl;
		break;
	case 3:
		cout << "You got " << bonebroth << endl;
		break;


	}


}

void dollarsEarned(double C_dollars, int c_slot1, int c_slot2, int c_slot3, double C_total)
{
	double won = 0;


	if (c_slot1 == c_slot2 || c_slot1 == c_slot3 || c_slot2 == c_slot3)
	{
		cout << "Congratulations! You won." << endl;
		won = (C_dollars * 2);
		cout << "You won " << won << endl;
	}
	else if ((c_slot1 == c_slot2 && c_slot1 == c_slot3) || (c_slot2 == c_slot1 && c_slot2 == c_slot3) || (c_slot3 == c_slot1 && c_slot3 == c_slot2))
	{
		cout << "Congrats...I guess, you won!" << endl;
		won = (C_dollars * 3);
		cout << "Congrats...I guess, you Won" << won << endl;

	}
	else
	{
		cout << "Hahaha...You didn't get any money." << endl;
	}
	C_total = (C_total + won);
}
