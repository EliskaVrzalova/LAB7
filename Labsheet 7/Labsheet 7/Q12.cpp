//name: eliska vrzalova
//login: c00301768
//date: 02/11/2023
//estimated time taken: 20 min
//actual time taken: 22 min
//program title and description= Interest due: this program calculates the total amount of interest due after user enters his credit card bill.
//any known bugs: No validation on user input
//test 1: User enters 1226, output should be: "Total interest due:190,68 euro"
//test 2: User enters 3657, output should be: "Total interest due:628.26 euro" 
//test 3: User enters 750, output should be: "Total interest due:60 euro"
//test 4: User enters 360, output should be: "Error: number bellow 500 cannot be entered."




#include<iostream>
void Interest(int t_creditCard, int t_SUM); //function declaration
int main12()
{
//variables
	int creditCard = 0;
	int SUM = 500;
	//input
	std::cout << "Enter the amount of your credit card bill:" << std::endl;
	std::cin >> creditCard;

	//error checking
	if (creditCard < SUM)
	{
		std::cout << "Error: Number less than 500 cannot be entered." <<std:: endl;
	}
	else
	{
		Interest(creditCard, SUM); //function call
	}
	system("Pause");
	return 0;
	

}
void Interest(int t_creditCard, int t_SUM) 
{

	//local variables
	const float FIRST_INTEREST = 0.12f;
	const float REMAIN_INTEREST = 0.18f;
	float firstInterest = 0;
	float remainInterest = 0;
	float totalInterest = 0;

	firstInterest = t_SUM * FIRST_INTEREST; //interest 12% from first 500 euro
	t_creditCard = t_creditCard - t_SUM;

	if (t_creditCard > t_SUM) {
		remainInterest = (t_creditCard - t_SUM) * REMAIN_INTEREST; //18% interest for any remaining amount over 500 euro 
	}
	totalInterest = firstInterest + remainInterest; //calculates the total interest charged
	std::cout << "Total interest due:" << totalInterest <<"euro"<< std::endl;

}