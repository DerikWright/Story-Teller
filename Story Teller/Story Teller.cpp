// Story Teller.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
// standard namespace
using namespace std;
//declare functions
//functions to be used
string GettextFromUser(string prompt);
int GetNumbersFromUser(string prompt);
void DisplayUserCommand();



int main()
{
	//variable to hoold the username
	string userName = "";
	//codbllock to colapse for space
	{
		cout << "Welcome to Space Time Adventure" << endl;
		//calling GetTextFromUser to dispplay prompt with instructions
		userName = GetTextFromUser("Please enter your name");
		//insert backstory here
		cout << " . \n";
		//Copy above as needed
	}
	//calling function todisplay user commands
	DisplayUserCommand();
	//calls for userchoice of number
	int number = GetNumbersFromUser

		//function to display user commands
		void DisplayUserCommand




    return 0;
}

