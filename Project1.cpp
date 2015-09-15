/* 
Project #1
A Recipe Qty and Cost Program - PB&J Edition 1.02
Created By: Brian Bui and David Lee
Created On: 9/5/2015
Last Updated: 9/15/2015
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
    
    // sandwich
    cout << "                   _.---._" << endl;
    cout << "                _.-~       ~-._" << endl;
    cout << "            _.-~               ~-._" << endl;
    cout << "        _.-~                       ~---._" << endl;
    cout << "    _.-~                                 ~/" << endl;
    cout << " .-~                                    _.;" << endl;
    cout << " :-._                               _.-~ ./" << endl;
    cout << " }-._~-._                   _..__.-~ _.-~)" << endl;
    cout << " `-._~-._~-._              / .__..--~_.-~" << endl;
    cout << "     ~-._~-._\.        _.-~_/ _..--~~" << endl;
    cout << "         ~-. \`--...--~_.-~/~~" << endl;
    cout << "            \.`--...--~_.-~" << endl;
    cout << "              ~-..----~" << endl;
    cout << endl << endl;
    
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
    cout << "=============================================" << endl;
    cout << left << setw(15) << "Item";
    cout << right << setw(15) << "Qty";
    cout << right << setw(15) << "Cost";
    cout << endl;
    cout << "---------------------------------------------" << endl;
    cout << left << setw(15) << "Bread";
    cout << right << setw(15) << breadQty;
    cout << right << setw(15) << fixed << setprecision(2) << breadCost;
    cout << endl;
    cout << left << setw(15) << "Peanut Butter";
    cout << right << setw(15) << fixed << setprecision(0) << peanutButterQty;
    cout << right << setw(15) << fixed << setprecision(2) << peanutButterCost;
    cout << endl;
    cout << left << setw(15) << "Jelly";
    cout << right << setw(15) << fixed << setprecision(0) << jellyQty;
    cout << right << setw(15) << fixed << setprecision(2) << jellyCost;
    cout << endl;
    cout << "---------------------------------------------" << endl;
    cout << setprecision(2);
    cout << "You will need to spend $" << totalCost << " without tax" << endl;
    cout << "You will need to spend $" << totalCost * salesTax << " with tax" << endl;
    cout << "=============================================" << endl;
    cout << endl;
    
    // Pause system to read results
    system("pause");
    return 0;
}
