// Final Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Void Slots.h" /*This is the Void slots header */


using namespace std;

void rules();


void rules()
{

	std::cout << endl;
	std::cout << "~~~~~~~ RULES OF THE GAME: PLEASE READ ~~~~~~~" << endl; /*This is where the rules are and what the user is going to do.*/
	std::cout << "1. Choose any number between 1 to 20" << endl;
	std::cout << "2. If you win you will get 10 times of dollars you bet" << endl;
	std::cout << "3. If you bet on a wrong number you will lose your betting amount" << endl;

	return;
}


class person /*This whole text of code is for displaying of the username of that person.*/
{
	char name[30];
public:
	void getdata();
	void display();
};
void person::getdata()
{
	cout << "Enter Username - ";
	cin >>name;
	cout << endl;
}
void person::display() /*This diplays the person name with an apostrope s.*/
{
	cout <<name<< "'s name is\n ";
	cout << endl;
	cout << "Good day mate, " << name << endl;
	cout << endl;
	cout << "Cock-a-Doodle-Do, Wake up, it's time play the Casino Slots Game " << name << endl; /*Tried to make it as funny as possible.*/
}
int main()
{
	person p; /*Displays that person's name.*/
	p.getdata();
	p.display();

	rules();
	cout << endl;
	
	
	double dollars = 0; /*The dollars you'll be inserting*/
	double c_total = 0; /*The total of the amounnt of dollars you'll be having*/
	double theAmount = 0;


	string bonebroth = "bonebroth";
	string pears = "pears";
	string doAgain;
	srand(time(0));

	do
	{
		cout << "Please insert dollar bills y'all into my Casino Slot Machine" << endl;
		cin >> dollars;
		cout << "You put in $" << dollars << endl;
		cout << endl;

		
		
	
		theAmount = (theAmount + dollars);



		 cout << "Mate, would like to play or not? Yes or no, hurry and pick one." << endl;
		 cout << endl;
		 cin >> doAgain;
		 if (doAgain != "yes")
		 {
			 cout << "The amount you put in the casino....I mean the slot machine is " << theAmount << endl;
			 cout << endl;
			 cout << "Maybe...The total amount of dollars you won is $ " << theAmount << endl;
			 cout << endl;
		 }
		 
		 

		
	} while (doAgain == "yes");

	


	system("pause");
	return 0;
	

}





