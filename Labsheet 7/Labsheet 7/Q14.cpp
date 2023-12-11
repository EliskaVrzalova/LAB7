//name: eliska vrzalova
//login: c00301768
//date: 06/11/2023
//estimated time taken: 20 min
//actual time taken:  min
//program title and description: Insurance premium: this program calculates the insurance premium for the coming year
//any known bugs: no validation on user input
//Test 1: Premium: 100, claims:0, output: 103
//test 2: Premium: 200, claims: 5, output: 220
//Test 3: Premium: 2500, claims: 0, output: 2575
//Test 4: Premium: 0, claims: 2, output: error- please enter a valid value


#include <iostream>

int main()
{
	//variables
	int premium = 0.0f;
	int claims = 0;
	int newPremium1 = 0.0f;
	int newPremium2 = 0.0f;
	const float BASIC_INCREASE = 0.05f;
	const float NO_CLAIMS_DISCOUNT = 0.4f;
	const float EXTRA_CHARGE_CLAIMS = 0.2f;

	//input
	std::cout << "Enter the value of the last year's premium" << std::endl;
	std::cin >> premium;
	std::cout << "Enter the number of claims you made that year" << std::endl;
	std::cin >> claims;

	premium = premium + (premium * BASIC_INCREASE); //last year's premium is increased by 5%

	if (claims == 0) {
		newPremium1 = premium - (premium * BASIC_INCREASE * NO_CLAIMS_DISCOUNT); //if no claims, discount 40% from the 5% increase, calculates the new premium
		std::cout << "Your new premium insurance is:" << newPremium1 << std::endl;

	}
	else {
		newPremium2 = premium + (premium*BASIC_INCREASE * (claims * EXTRA_CHARGE_CLAIMS)); //there is 20% charge for every claim made, calculates the new premium
		std::cout << "Your new premium is: " << newPremium2 << std::endl;
	}

	//error checking
	while (premium <= 0)
	{
		std::cout << "Please enter a valid value:" << std::endl;
		std::cin >> premium;
	}
	while (claims < 0) 
	{
		std::cout << "Please enter a valid value:" << std::endl;
		std::cin >> claims;
	}
	system("pause");
	return 1;
}