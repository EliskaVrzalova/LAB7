//name: eliska vrzalova
//login: c00301768
//date: 23/10/2023
//estimated time taken: 10 min
//actual time taken: 13 mins
//program title and description: Perimeter of rectangle: This program calculates the perimeter of rectangle
//any known bugs: No validation on user input
//test 1: user inputs 2, 4, output should be: "The perimeter of rectangle is: 12"
//test 1: user inputs 10, 25, output should be: "The perimeter of rectangle is: 70"
//test 1: user inputs 0, 4, output should be: "Error cannot enter number less or equal to 0"
//test 1: user inputs 2, 0, output should be: "Error cannot enter number less or equal to 0"

#include <iostream>

void calPerimeterRectangle(float t_width, float t_lenght); //function declaration

int main9()
{
	//variables
	float width = 0.f;
	float lenght = 0.f;

	//ask user for input
	std::cout << "Enter the width in meters:" << std::endl;
	std::cin >> width;
	std::cout << "Enter the lenght in meters:" << std::endl;
	std::cin >> lenght;

	//error checking
	if (width <= 0 or lenght <= 0)
	{
		std::cout << "Error: number less or equal to 0 cannot be enetered";
	}
	else
	{
		calPerimeterRectangle(width, lenght); //function call
	}

	system("pause");
	return 0;
}
void calPerimeterRectangle(float t_width, float t_lenght)  //function definition
{
		float perimeter = 0.f;
		
			perimeter = 2 * (t_width + t_lenght); //calculates the perimeter of the rectangle
			std::cout << "The perimeter of rectangle is:" << perimeter << std::endl;
		
}
