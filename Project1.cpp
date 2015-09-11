/* 
	Project 1, A recipe qty and cost program
	Created By: Brian Bui and David Lee
	Created On: 9/5/2015
	Last Updated: 9/8/2015
*/

#include <iostream>
using namespace std;

int main()
{
	// Initialize Variables
	double sandwichQty;
	double breadQty;
	double peanutButterQty;
	double jellyQty;
	double breadCost;
	double peanutButterCost;
	double jellyCost;
    double totalCost;

	// Constants for cost calulations
	const double loafOfBreadCost = 5;
	const int numberOfSlicesInLoaf = 18;
	const double costOfPeanutButter = 2.50;
	const int numberOfOuncesInPeanutButterJar = 18;
	const int numberOfGramsOfPeanutButterInOneSandwich = 32;
	const double costOfJelly = 2.50;
	const int numberOfOuncesInJellyJar = 8;
	const int numberOfGramsOfJellyInOneSandwich = 11;

	// Ask user how many sandwichs
	cout << "How many sandwiches do you wish to make?" << endl;
	// Set variable to user input
	cin >> sandwichQty;

    // Get bread, peanut butter and jelly costs
    breadQty = sandwichQty * 2;
    peanutButterQty = sandwichQty * numberOfGramsOfPeanutButterInOneSandwich;
    jellyQty = sandwichQty * numberOfGramsOfJellyInOneSandwich;
    
	// Get bread, peanut butter and jelly costs
	// Takes cost by ounces converts to grams
	breadCost = breadQty  * loafOfBreadCost / numberOfSlicesInLoaf;
	peanutButterCost = peanutButterQty * (costOfPeanutButter / (numberOfOuncesInPeanutButterJar / 0.035274));
	jellyCost = jellyQty * (costOfJelly / (numberOfOuncesInJellyJar / 0.035274));
    totalCost = breadCost + peanutButterCost + jellyCost;

	// Display results
	cout << endl;
	cout << "In order to make " << sandwichQty << " PP&Js" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "You will need " << breadQty << " slices of bread which will cost you $" << breadCost << endl;
	cout << "You will need " << peanutButterQty << " grams of peanut butter which will cost you $" << peanutButterCost << endl;
	cout << "You will need " << jellyQty << " grams of jelly which will cost you $" << jellyCost << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "You will need to spend $" << totalCost << " in total" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << endl;

	// Pause system to read results
	system("pause");
	return 0;
}
