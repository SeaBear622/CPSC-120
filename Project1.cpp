/* 
Project 1, A recipe qty and cost program
Created By: Brian Bui and David Lee
Created On: 9/5/2015
Last Updated: 9/8/2015
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Initialize Variables
    double sandwichQty;
    double breadQty; // in slices
    double peanutButterQty; // in grams
    double jellyQty; // in grams
    double breadCost;
    double peanutButterCost;
    double jellyCost;
    double totalCost;
    
    // Constants for cost calulations
    const double salesTax = 1.08;
    const double loafOfBreadCost = 5;
    const int numberOfSlicesInLoaf = 18;
    const double costOfPeanutButter = 2.50;
    const int numberOfOuncesInPeanutButterJar = 18;
    const int numberOfGramsOfPeanutButterInOneSandwich = 32;
    const double costOfJelly = 2.50;
    const int numberOfOuncesInJellyJar = 8;
    const int numberOfGramsOfJellyInOneSandwich = 11;
    
    // Welcome Message
    cout << "Welcome to another A recipe qty and cost program - PB&J Edition";
    cout << endl << endl;
    
    /*
    // sandwich
    cout << "                   _.---._" << endl;
    cout << "                _.-~       ~-._" << endl;
    cout << "            _.-~               ~-._" << endl;
    cout << "        _.-~                       ~---._" << endl;
    cout << "    _.-~                                 ~\" << endl;
    cout << " .-~                                    _.;" << endl;
    cout << " :-._                               _.-~ ./" << endl;
    cout << " }-._~-._                   _..__.-~ _.-~)" << endl;
    cout << " `-._~-._~-._              / .__..--~_.-~" << endl;
    cout << "     ~-._~-._\.        _.-~_/ _..--~~" << endl;
    cout << "         ~-. \`--...--~_.-~/~~" << endl;
    cout << "            \.`--...--~_.-~" << endl;
    cout << "              ~-..----~" << endl;
    */
    
    // Ask user how many sandwichs
    cout << "How many sandwiches do you wish to make?: ";
    // Set variable to user input
    cin >> sandwichQty;
    
    // Get bread, peanut butter and jelly qtys
    breadQty = sandwichQty * 2;
    peanutButterQty = sandwichQty * numberOfGramsOfPeanutButterInOneSandwich;
    jellyQty = sandwichQty * numberOfGramsOfJellyInOneSandwich;
    
    // Get bread, peanut butter and jelly costs
    // Takes qty and multiples cost by grams after conversion
    breadCost = breadQty  * loafOfBreadCost / numberOfSlicesInLoaf;
    peanutButterCost = peanutButterQty * (costOfPeanutButter / (numberOfOuncesInPeanutButterJar / 0.035274));
    jellyCost = jellyQty * (costOfJelly / (numberOfOuncesInJellyJar / 0.035274));
    totalCost = breadCost + peanutButterCost + jellyCost;
    
    // Display results
    cout << endl;
    cout << "In order to make " << sandwichQty << " PP&Js" << endl;
    cout << "===============================================================================" << endl;
    cout << left << setw(20) << "Item" << left << setw(20) << "Qty" << left<< setw(20) << "Cost" << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << left << setw(20) << "Bread" << left << setw(20) << breadQty << left << setw(20) << fixed << setprecision(2) << breadCost << endl;
    cout << left << setw(20) << "Peanut Butter" << left << setw(20) << fixed << setprecision(0) << peanutButterQty << left << setw(20) << fixed << setprecision(2) << peanutButterCost << endl;
    cout << left << setw(20) << "Jelly" << left << setw(20) << fixed << setprecision(0) << jellyQty << left << setw(20) << fixed << setprecision(2) << jellyCost << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << setprecision(2);
    cout << "You will need to spend $" << totalCost << " without tax" << endl;
    cout << "You will need to spend $" << totalCost * salesTax << " with tax" << endl;
    cout << "===============================================================================" << endl;
    cout << endl;
    
    // Pause system to read results
    system("pause");
    return 0;
}
