//name: eliska vrzalova
//login: c00301768
//date: 18/10/2023
//estimated time taken: 10 min
//actual time taken: 15 mins
//program title and description: Fahrenheit to celsius conversion: this program converts input fahrenheit temperature to its celsius equivalent
//any known bugs: No validation on user input.
//Test 1: user enters 32, output should be: "This temperature is in celsius 0."
//Test 2: user enters 100, output should be: "This temperature is in celsius 37.7778."
//Test 3: user enters 5, output should be: "This temperature is in celsius -15."

#include <iostream>

int main5()
{
	//variables
	float fahrenheit = 0;
	float celsius = 0;
	float const CONVERTION = 5.0f / 9;
	//input
	std::cout << "Enter the temperature in fahrenheit:" << std::endl;
	std::cin >> fahrenheit;
	//convertion , formula = celsius = fahrenheit-32*5/9
	celsius = (fahrenheit - 32) * CONVERTION; //converts fahrenheit to celsius
	//answer
	std::cout << "This temperature is in celsius " << celsius << std::endl;
	system("Pause");
	return 0;
}