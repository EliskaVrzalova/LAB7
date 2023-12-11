//name: eliska vrzalova
//login: c00301768
//date: 25/10/2023
//estimated time taken: 15 min
//actual time taken: 13 mins
//program title and description: calculation of euro notes: Main() function reades the an amount euro input by user, calculateEuroNotes() function calculate how many 10 euro notes and 1 euro notes user has
//any known bugs: No validation on user input
//test 1: user inputs 34, output should be: "You have 3 10 euro notes and 4 1 euro notes"
//test 2: user inputs 50, output should be: "You have 5 10 euro notes and 0 1 euro notes"
//test 3: user inputs 0, output should be: "Error: number less or equal to 0 cannot be entered"
//test 4: user inputs -1, output should be: "Error: number less or equal to 0 cannot be entered"

#include <iostream>
void calculateEuroNotes( int t_euros); //function declaration

int main10()
{
	//variables
	int euros = 0;
	//ask user for input
	std::cout << "Enter the amount in euro:" << std::endl;
	std::cin >> euros;

	//error checking
	if (euros <= 0) 
	{
		std::cout << "Error= number less or equal to 0 cannot be entered" << std::endl;

	}
	else
	{
		calculateEuroNotes(euros); //function call
	}
	system("pause");
	return 0;
}
void calculateEuroNotes(int t_euros) //function definition
//calculates the number of 10 euro notes and the number of 1 euro notes
{
	//local variables
	int numNotes10 = 0;
	int numNotes1 = 0;
	const int NOTES_10 = 10;

	
		numNotes10 = t_euros / NOTES_10; //calculates the number of 10 euro notes
		t_euros = t_euros - (numNotes10 * NOTES_10);
		numNotes1 = t_euros; //the number of 1 euro notes
		std::cout << "You have " << numNotes10 << " 10 euro notes and " << numNotes1 << " 1 euro notes" << std::endl;

}
