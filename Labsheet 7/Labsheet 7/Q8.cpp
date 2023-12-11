//name: eliska vrzalova
//login: c00301768
//date: 23/10/2023
//estimated time taken: 10 min
//actual time taken: 13 mins
//program title and description: Area of rectangle: This program calculates the area of rectangle
//any known bugs:No validation on user input
//test 1: user inputs 10, 5, output should be: "The area of rectangle is: 50."
//test 2: user inputs -1, 5, output should be: "Error: input cannot be bellow zero."
//test 3: user inputs 10, -1, output should be: "Error: input cannot be bellow zero."

#include <iostream>
void calAreaRectangle(float t_lenght, float t_width); //function declaration

int main8()
{
	//variables
	float lenght = 0.f;
	float width = 0.f;
	

	//ask user for input
	std::cout << "Enter the lenght in meters:" << std::endl;
	std::cin >> lenght;
	std::cout << "Enter the width in meters:" << std::endl;
	std::cin >> width;

	//error checking
	if (lenght < 0 or width < 0) 
	{
		std::cout << "Error:input cannot be lees than 0." << std::endl;
	}
	else
	{
		calAreaRectangle(lenght, width); //function call
	}
	system("Pause");
	return 0;
}
void calAreaRectangle(float t_lenght, float t_width) //function definition
{
	float area = 0.f;
	
	area = t_lenght * t_width; //calculates the area of rectangle
	std::cout << "The area of rectangle is:" << area << std::endl;
	
}
