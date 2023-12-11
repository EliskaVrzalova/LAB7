//name: eliska vrzalova
//login: c00301768
//date: 16/10/2023
//estimated time taken: 15 min
//actual time taken: 15 min
//program title and description : Income: program outputs wheter the income is low, middle or high based on conditions bellow
//any known bugs : No validation on user input
//Test 1: user enters 0, output should be: "Low income."
//Test 2: user enters 15 000, output should be: "Low income."
// Test 3: user enters 30 000, output should be: "Middle income."
//Test 4: user enters 63 000, output should be: "Middle income."
// Test 5: user enters 70 000, output should be: "High income."
//Test 6: user enters 100 000, output should be: "High income."
//Test 7: user enters -1, output should be: "Error - you cannot enter negative numbers."

#include <iostream>

int main2()
{
	//variables
	float incomeValue = 0;
	int const LOW_INCOME = 30000;
	int const MIDDLE_HIGH_INCOME = 70000;
	//input
	std::cout << "What is your income?" << std::endl;
	std::cin >> incomeValue;
	//calculations
	if (incomeValue >= 0 and incomeValue < LOW_INCOME) //Range of low income
	{
		std::cout << "Low income." << std::endl;
	}
	else if (incomeValue >= LOW_INCOME and incomeValue < MIDDLE_HIGH_INCOME) //Range of middle income
	{
		std::cout << "Middle income." << std::endl;
	}
	else if (incomeValue >= MIDDLE_HIGH_INCOME) //Range of high income
	{
		std::cout << "High income." << std::endl;
	}
	else //error message if negative number is entered
	{
		std::cout << "Error - you cannot enter negative numbers." << std::endl;
	}
	system("Pause");
	return 0;


}