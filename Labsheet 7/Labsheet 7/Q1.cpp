//name: eliska vrzalova
//login: c00301768
//date: 16/10/2023
//estimated time taken: 15 min
//actual time taken: 10 min
//program title and description: Comparing to 0: this program compares input with zero and outputs wheter it is less equal or greater than 0
//any known bugs: No validation on user input
//Test 1: user enters 0, output should be: "The number was equal to zero."
//Test 2: user enters -1, output should be: "The number was less than zero."
//Test 3: user enters -10, output should be: "The number was less than zero."
//Test 4: user enters 1, output should be: "The number was greater than zero."
//Test 5: user enters 8, output should be: "The number was greater than zero."

#include<iostream>

int main1()
{
	//variables
	int numberValue = 0;
	//input
	std::cout << "Enter a number:";
	std::cin >> numberValue;
	//calculations
	if (numberValue < 0) // if number is less than 0
	{
		std::cout << "The number was less than 0" << std::endl;
	}
	else if (numberValue == 0) //if the number is 0
	{
		std::cout << "The number was equal to zero" << std::endl;
	}
	else // if number is greater than 0
	{
		std::cout << "The number is greater than zero" << std::endl;
	}
	system("Pause");
	return 0;
}