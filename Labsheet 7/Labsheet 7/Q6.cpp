//name: eliska vrzalova
//login: c00301768
//date: 23/10/2023
//estimated time taken: 10 min
//actual time taken: 10 mins
//program title and description: Centimeters and inches convertion: This program converts input cm to inch or displays error message if the input is less or equal to 0
//any known bugs: No validation on user input
//Test 1: User inputs 15, output should be 5.91
//Test 2: User inputs 40, output should be 15.76
//Test 3: User inputs -1, output should be "Error- the number has an incorrect value."
//Test 4: User inputs 0, output should be "Error- the number has an incorrect value."

#include <iostream>

void inchEquivalent(float t_centimeters); //function declaration
int main6()
{
	//variables
	float centimeters = 0.f;
	
	

	//ask user for input
	std::cout << "What is the lenght in centimeters?" << std::endl;
	std::cin >> centimeters;

	if (centimeters <= 0) 
	{
		std::cout << "Error- The number has an incorrect value" << std::endl;
	}
	else {
		inchEquivalent(centimeters); //function call
	}
	system("Pause");
	return 0;
}


void inchEquivalent(float t_centimeters)//function definition
{
	float inches = 0.f;
	const float CONVERTION = 0.394f;
	
	inches = t_centimeters * CONVERTION; //converts centimeters to inches
	std::cout << "The lenght in centimeters is:" << inches << std::endl;
	
}
	
