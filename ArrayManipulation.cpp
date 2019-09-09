// This program asks for the user to input an integer, fills an array from 1 to user's input, and displays the contents of the array.
// It also checks that user inputs the numbers correctly.

#include <iostream>
using namespace std;

int main()
{
	int userInput = 0;	// Buffer for user input
	int numberArray[99]; //Array for numbers; range is from 0 to 100, so array index is 0 to 99
	bool checkUserInput = false; //Checker for user input

	while(checkUserInput == false) // Loops till user input is valid
	{
		cout << "Please enter a number: "; //Prompt for user to enter input
		cin >> userInput;
		if (cin.fail())	// If input is not an integer
		{
			cout << endl << "ERROR: Invalid input. Must be an integer." << endl;
			// Clear buffer to allow user to input again
			cin.clear(); 
			cin.ignore();
		}

		else if (userInput > 100 || userInput < 0) // Checks if the user input is between 0 and 100
			cout << endl << "ERROR: Invalid input. Number must be between 0 and 100." << endl;

		else
		{
			userInput--;	// To match indexing of arrays
			for (int i = 0; i <= userInput; ++i)
			{
				numberArray[i] = i + 1; // Assign each number from 1 to user input to array
			}


			for (int i = 0; i <= userInput; ++i)
			{
				cout << numberArray[i] << endl; // Display numbers in array
			}
			checkUserInput = true; // Breaks the loop
		}
	}


	return 0; // Exits program

}
