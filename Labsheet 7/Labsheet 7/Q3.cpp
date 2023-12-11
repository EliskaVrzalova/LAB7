//name: eliska vrzalova
//login: c00301768
//date: 18/10/2023
//estimated time taken: 15 min
//actual time taken: 15 mins
//program title and description: Exam grade: program outputs wheter student failes, passed, had merit or distinction after he enter his grade
//any known bugs: No validation onn user input
//Test 1: User inputs 2, output should be: "Student has failed."
//Test 2: User inputs 40, output should be: "Student has passed."
//Test 3: User inputs 47, output should be: "Student has passed."
//Test 4: User inputs 55, output should be: "Student has a merit."
//Test 5: User inputs 60, output should be: "Student has a merit."
//Test 6: User inputs 70, output should be: "Student has distinction."
//Test 7: User inputs 90, output should be: "Student has distinction."
//Test 8: User inputs 100, output should be: "Student has distinction."
//Test 9: User inputs 115, output should be: "Error - exam mark has an incorrect value.
//Test 10: User inputs -1, output should be : "Error - exam mark has an incorrect value.


#include <iostream>

int main3()
{
	//variables
	int examMark = 0;
	const int FAIL = 40;
	const int PASS = 55;
	const int MERIT = 70;
	const int DISTINCTION = 100;
	//ask user for input
	std::cout << "What is your exam mark" << std::endl;
	std::cin >> examMark;
	//checking the grade
	if (examMark >= 0 and examMark < FAIL) // range 0 - 39
	{
		std::cout << "Student has failed." << std::endl;
	}
	else if (examMark >= FAIL and examMark < PASS) //range 40 -54
	{ 
		std::cout << "Student has passed." << std::endl;
	}
	else if (examMark >= PASS and examMark < MERIT) //range 55- 69
	{
		std::cout << "Student has a merit." << std::endl;
	}
	else if (examMark >= MERIT and examMark <= DISTINCTION) //range 70 - 100
	{
		std::cout << "Student has distinction.";
	}
	else {
		std::cout << "Error- exam mark has an incorrect value." << std::endl;
	}


	system("Pause");
	return 0;
}