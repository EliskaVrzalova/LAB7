//name: eliska vrzalova
//login: c00301768
//date: 25/10/2023
//estimated time taken: 20 min
//actual time taken: 30 min
//program title and description: Number sorting: function sortNumbers() sorts 3 input by asceding order: lowest, middle highest
//any known bugs: no validation on user input
//test 1: user enters 5 4 9, output should be: "the lowest number is: 3, the middle number is: 5 and the highest number is: 9"
//test 2: user enters 1 3 9, output should be: "Error- number is outside the range 4-16"
//test 3: user enters 1 3 20, output should be: "Error- number is outside the range 4-16"

#include <iostream>

void sortNumbers(int t_num1, int t_num2, int t_num3); //function declaration

int main11()
{
	//variables
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//input
	std::cout << "Enter the first number:" << std::endl;
	std::cin >> num1;
	std::cout << "Enter the second number" << std::endl;
	std::cin >> num2;
	std::cout << "Enter te third number" << std::endl;
	std::cin >> num3;

	//error checking
	if (num1 >= 4 && num1 <= 16 && num2 >= 4 && num2 <= 16 && num3 >= 4 && num3 <= 16) 
	{
		sortNumbers(num1, num2, num3);//function call
	}
	else 
	{
		std::cout << "Error: number is outside the range 4-16" << std::endl;
	}
	system("pause");
	return 0;
}

void sortNumbers(int t_num1, int t_num2, int t_num3) //sorts the numbers by ascending order lowest, middle, highest
{
	//if the first number was the lowest
	if (t_num1 < t_num2 && t_num1 < t_num3)
	{
		std::cout << "The lowest number is:" << t_num1 << std::endl;
		if (t_num2 < t_num3) //num2 is the middle number
		{ 
			std::cout << "The middle number is:" << t_num2 << std::endl;
			std::cout << "The highest number is:" << t_num3 << std::endl;
		}
		else//num2 is the highest number
		{
			std::cout << "The middle number is:" << t_num3 << std::endl;
			std::cout << "The highest number is:" << t_num2 << std::endl;
		}
		
	}
	//if the second number was the lowest
	else if (t_num2 < t_num1 && t_num2 < t_num3) 
	{
		std::cout << "The lowest number is:" << t_num2 << std::endl;
		if (t_num1 < t_num3) //num1 is the middle number
		{
			std::cout << "The middle number is:" << t_num1 << std::endl;
			std::cout << "The highest number is" << t_num3 << std::endl;
		}
		else//num1 is the highest number 
		{
			std::cout << "The middle number is:" << t_num3 << std::endl;
			std::cout << "The highest number is:" << t_num1 << std::endl;
		}

	}
	//if the third number was the lowest
	else if (t_num3 < t_num1 && t_num3 < t_num2) 
	{
		std::cout << "The lowest number is:" << t_num3 << std::endl;
		if (t_num1 < t_num2)//num1 is the middle number 
		{
			std::cout << "The middle number is:" << t_num1 << std::endl;
			std::cout << "The highest number is:" << t_num2 << std::endl;
		}
		else //num1 is the highest number 
		{
			std::cout << "The middle number is:" << t_num2 << std::endl;
			std::cout << "The highest number is:" << t_num1 << std::endl;
		}
	}
} //end function 