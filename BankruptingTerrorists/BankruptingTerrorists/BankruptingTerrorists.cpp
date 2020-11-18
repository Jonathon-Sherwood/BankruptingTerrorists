/*
	Jonathon Sherwood
	11/18/2020
	Bankrupting Terrorists: Practice with References
*/

#include <iostream> //Allows us to print to console

using namespace std; //Calls the std library for shorthand

void terroristsInput(int terroristAccount, int coffeeShopAccount);
void secretSwap(int& terroristAccount, int& coffeeShopAccount);
int main() //Main function in all c++ codes
{
	int terroristProfts = 10000000; //Initializes terrorist profits
	int coffeeShopProfits = 3;      //Initializes coffee shop profits

	//Introduces program
	cout << "Welcome Agent Hackermann.\n";
	cout << "This program will initialize with a false swap of two accounts:\n";
	cout << "One account belongs to the terrorist group BadTerroristPeople Inc.\n";
	cout << "The other belongs to our beloved local Joe's Coffee Shop.\n";
	cout << "\nOnce the false swap has gone through, the proper transfer of funds will begin.\n";
	cout << "All profits from the BadTerroristPeople Inc will be swapped to Joe's Coffee Shop\n\n";

	//Displays initial profits
	cout << "Checking Accounts . . .\n";
	cout << "Terrorist Account: $" << terroristProfts << "\n";
	cout << "Coffee Shop Account: $" << coffeeShopProfits << "\n\n";
	cout << "Initializing False Swap. . .\n";

	//Attempts transfer without references
	terroristsInput(terroristProfts, coffeeShopProfits);

	//Displays unchanged profits
	cout << "\nChecking Accounts . . .\n";
	cout << "Terrorist Account: $" << terroristProfts << "\n";
	cout << "Coffee Shop Account: $" << coffeeShopProfits << "\n\n";
	cout << "Initializing Transfer. . .\n";

	//Transfers using references
	secretSwap(terroristProfts, coffeeShopProfits);

	//Displays changed profits
	cout << "\nChecking Accounts . . .\n";
	cout << "Terrorist Account: $" << terroristProfts << "\n";
	cout << "Coffee Shop Account: $" << coffeeShopProfits << "\n\n";

	cout << "Transfer successful. Glory to Joe's Coffee Shop.\n\n\n";

	return 0; //Closes out main function
}

//Swaps integers without references, removing change after function ends
void terroristsInput(int terroristAccount, int coffeeShopAccount)
{
	int swap = terroristAccount;            //Holds the original value of the terrorist account
	terroristAccount = coffeeShopAccount;   //Assigns the value of the terrorist account to the coffee shop
	coffeeShopAccount = swap;               //Assigns the coffee shop value to the original terrorist account value
}

//Swaps integers using references, maintining the change after function ends
void secretSwap(int& terroristAccount, int& coffeeShopAccount)
{
	int swap = terroristAccount;            //Holds the original value of the terrorist account
	terroristAccount = coffeeShopAccount;   //Assigns the value of the terrorist account to the coffee shop
	coffeeShopAccount = swap;               //Assigns the coffee shop value to the original terrorist account value
}