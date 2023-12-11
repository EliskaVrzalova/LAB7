//name: eliska vrzalova
//login: c00301768
//date: 02/11/2023
//estimated time taken: 15 min
//actual time taken:  min
//program title and description: division possibility: This program outputs whether is the first number exactly divisible by both or one of the 2 other numbers entered.
//any known bugs: no validation on user input
//test 1: user enters: 20 5 4, output should be:" The first number is exactly divisible by both numbers."
//test 2: user enters: 20 5 3, output should be: "the first number is exactly divisible by one of the 2 numbers." and "The first number is exactly divisible by the number 5"
//test 3: user enters: 20 7 3, output should be: "The first number is not exactly divisible by any of the numbers."


#include <iostream>

int main13()
{
	//variables
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int result1 = 0;
	int result2 = 0;

	//input
	std::cout << "Enter the first number:" << std::endl;
	std::cin >> num1;
	std::cout << "Enter the second number" << std::endl;
	std::cin >> num2;
	std::cout << "Enter te third number" << std::endl;
	std::cin >> num3;

	result1 = num1 % num2;
	result2 = num1 % num3;

	if (result1 == 0 && result2 == 0) //num1 is exactly divisible by both num2 and num3
	{
		std::cout << "The first numbers is exactly divisible by both numbers" << std::endl;
	}
	else if (result1 == 0 || result2 == 0) // num1 is not exactly divisible by both num1 or and num2
	{
		std::cout << "The first number is exactly divisible by one of the 2 numbers" << std::endl;
		if (result1 == 0) // num1 is exactly divisible only by num2
		{
			std::cout << "The first number is exactly divisible by the number" << num2 << std::endl;
		}
		else // num1 is exactly divisible only by num3
		{
			std::cout << "The first number is exactly divisible by the number" << num3 << std::endl;
		}
	}
	else // num1 is not exactly divisible by any of the 2 numbers
	{
		std::cout << "The first number is not exactly divisible by any of the numbers" << std::endl;
	}
	system("Pause");
	return 0;




}