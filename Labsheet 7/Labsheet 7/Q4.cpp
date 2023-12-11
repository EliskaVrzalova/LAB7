//name: eliska vrzalova
//login: c00301768
//date: 18/10/2023
//estimated time taken: 10 min
//actual time taken: 12 mins
//program title and description: Division = program output whether is the first number exactly divisible by the second number or not
//any known bugs: No validation on users input.
//Test 1: user enters 4 and 2, output should be: "Number 4 IS exactly divisible by number 2."
//Test 2: user enters 24 and 8, output should be: "Number 24 IS exactly divisible by number 8."
//Test 3: user enters 15 and 7, output should be: "Number 15 is NOT exactly divisible by number 7."
//Test 4: user enters 20 and 3, output should be: "Number 20 is NOT exactly divisible by number 3."

#include <iostream>

int main4()
{
	//variables
	int num1 = 0;
	int  num2 = 0;
	int result = 0; //result of division num1/num2
	//ask user for input
	std::cout << "Enter the first number:" << std::endl;
	std::cin >> num1;
	std::cout << "Enter the second number:" << std::endl;
	std::cin >> num2;

	//calculation
	result = num1 % num2;
	//checking division possibility
	if (result == 0) //exactly divisible
	{
	std::cout << "Number" << num1 << " IS exactly divisible by number " << num2 << std::endl;
	}
	else // not exactly divisible
	{
		std::cout << "Number " << num1 << " is NOT exactly divisible by number " << num2 << std::endl;
	}
	system("Pause");
	return 1;
}