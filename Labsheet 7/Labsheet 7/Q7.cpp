//name: eliska vrzalova
//login: c00301768
//date: 23/10/2023
//estimated time taken: 10 min
//actual time taken: 13 mins
//program title and description: Time displayed in seconds: This program displays input seconds, minutes amd hours as total time in seconds
//any known bugs: No validation on user input
//Test 1: User inputs: -1, 30; 4, output should be: "Error: The number has an incorrect value."
//Test 2: User inputs: 120, -1; 4, output should be: "Error: The number has an incorrect value."
//Test 3: User inputs: 120, 30; -1, output should be: "Error: The number has an incorrect value."
//Test 4: User inputs: 120, 30; 4, output should be: "The total time in seconds is: 16320"
//Test 5: User inputs: 0, 30; 4, output should be: "The total time in seconds is: 16200"

#include <iostream>
void secondsIn(int t_seconds, int t_minutes, int t_hours); //function declaration
int main7()
{
	//variables
	int seconds = 0;
	int minutes = 0;
	int hours = 0;


	//ask user for input
	std::cout << "Enter the amout of seconds:" << std::endl;
	std::cin >> seconds;
	std::cout << "Enter the amount of minutes:" << std::endl;
	std::cin >> minutes;
	std::cout << "Enter the amout of hours:" << std::endl;
	std::cin >> hours;

	//error checking
	if(seconds < 0 || minutes < 0 || hours < 0)
	{
		std::cout << "Error - Input cannot be bellow 0" << std::endl;
	}
	else
	{
		secondsIn(seconds, minutes, hours); //function call
	}
	system("pause");
	return 0;
}

	//convertion
void secondsIn(int t_seconds, int t_minutes, int t_hours) //function definition
{
	const int MINUTES_TO_SECONDS = 60; //there are 60 seconds in 1 minute, local variable
	const int HOURS_TO_SECONDS = 3600; //there are 3600 seconds in 1 hour, local variable

		t_seconds = t_seconds + (t_minutes * MINUTES_TO_SECONDS) + (t_hours * HOURS_TO_SECONDS); //converts minutes and hours to seconds, adds secs mins and hours
		std::cout << "The total time in seconds is:" << t_seconds << std::endl;
	
}