//name: eliska vrzalova
//login: c00301768
//date: 18/10/2023
//estimated time taken: 15 min
//actual time taken:  mins
//program title and decription: The lowest number: this programs outputs the lowest number out of three numbers entered
//any known bugs: No validation on user input
//Test 1: user enters 4 2 15, the output should be: "The lowest number is: 2"
//Test 2: user enters 5 7 11, the output should be: "The lowest number is: 5"
//Test 3: user enters 3 1 17, the output should be: "Error - The number you have enteret is out of range 1 - 15."

#include <iostream>

int main5b()
{
	//variables
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//ask user for input
	std::cout << "Enter the first number:" << std::endl;
	std::cin >> num1;
	std::cout << "Enter the second number:" << std::endl;
	std::cin >> num2;
	std::cout << "Enter the third number:" << std::endl;
	std::cin >> num3;
	//checking the lowest number
	if (num1 >= 1 and num1 <= 15 and num2 >= 1 and num2 <= 15 and num3 >= 1 and num3 <= 15) //range 1-15 for all numbers
	{
		if (num1 < num2 and num1 < num3) //first number is the lowest
		{
			std::cout << "The lowest number is:" << num1 << std::endl;
		}
		else if (num2 < num1 and num2 < num3) //second number is the lowest
		{
			std::cout << "The lowest number is:" << num2 << std::endl;
		}
		else if (num3 < num1 and num3 < num2) //third number is the lowest
		{
			std::cout << "The lowest number is:" << num3 << std::endl;
		}
	} //end of nested else if
	else
	{
		std::cout << "Error - Number(s) you have entered is out of range 1-15." << std::endl;
		

	} //end if

	system("Pause");
	return 1;

}