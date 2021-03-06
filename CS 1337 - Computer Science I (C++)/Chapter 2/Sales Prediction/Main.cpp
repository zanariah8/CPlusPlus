/*
The East Coast sales division of a company generates 58 percent of total sales.
Based on that percentage, write a program that will predict how much the East
Coast division will generate if the company has $8.6 million in sales this year.
Author: Aaron Maynard
*/

#include <iostream>
using namespace std;

int main(){
    // Declare variables
    double salesDivision = .58; // 58%
    double salesCompany = 8.6;  // 8.6 million
    
    // Do some math
    double total = salesDivision * salesCompany;
    
    // Display total sales
    cout << "The total sales generated by the sales division is: $" << total << " million " << endl << endl;
    
    system("pause");
    return 0;
}
