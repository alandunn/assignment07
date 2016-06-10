#include <iostream>
#include <sstream>
#include <string>

#include "InputValidation.h"

using namespace std;


int validateInt ()
{
    string userInput;
	double userInputNum;
	bool keepGoing = true;
    
    do
	{
		//ASK FOR INPUT
		cout << "Please enter the \"N\" value for the board size: ";

		cin >> userInput;

		cout << endl;

		stringstream convert(userInput); // stringstream used for the conversion initialized with the contents of Text


        //CHECK INPUT, 
            //first if is for any word qualifications
            // else throw error that input is not valid

		//Give the value to userInputNum using the characters in the string
		//If it fails check for "quit" input. Otherwise give error and ask for new input.
		if (!(convert >> userInputNum))//give the value to Result using the characters in the string
		{
			if (userInput == "quit")
			{
				keepGoing = false;
			}

			else
			{
				cout << endl << "Error: Invalid input." << endl;
				cout << "Enter \"quit\" to exit the program." << endl;
				cout << "Otherwise please enter a positive whole number." << endl << endl;
				cin.clear();
			}
		}
		// Valid input, it was a number
		else
		{
		    // CHECK FOR INT/*
		    int N = userInputNum;

            // Check that the number entered is a whole number
			if (userInputNum != N)
			{
				cout << "Error: Number entered is not a whole number." << endl << endl;
			}
			else
			{
				return N;
			}
		}

	} while (keepGoing != false);
}

int validateDouble ()
{
    string userInput;
	double userInputNum;
	bool keepGoing = true;
    
    do
	{
		//ASK FOR INPUT
		cout << "Please enter the \"N\" value for the board size: ";

		cin >> userInput;

		cout << endl;

		stringstream convert(userInput); // stringstream used for the conversion initialized with the contents of Text


        //CHECK INPUT, 
            //first if is for any word qualifications
            // else throw error that input is not valid

		//Give the value to userInputNum using the characters in the string
		//If it fails check for "quit" input. Otherwise give error and ask for new input.
		if (!(convert >> userInputNum))//give the value to Result using the characters in the string
		{
			if (userInput == "quit")
			{
				keepGoing = false;
			}

			else
			{
				cout << endl << "Error: Invalid input." << endl;
				cout << "Enter \"quit\" to exit the program." << endl;
				cout << "Otherwise please enter a positive whole number." << endl << endl;
				cin.clear();
			}
		}
		// Valid input, it was a number. Return Double.
		else
		{
			
			return userInputNum;
		}

	} while (keepGoing != false);
}