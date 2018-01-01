/*
Madison County provides a $5,000 homeowner exemption for its senior citizens.
For example, if a senior's house is valued at $158,000 its assessed value
would be $94,800, as explained above.  However, he would only pay tax on
$89,800.  At last year's tax rate of $2.64 for each $100 of assessed value,
the property tax would be $2,370.72.  In addition to the tax break, senior 
citizens are allowed to pay their property tax in four equal payments. The
quarterly payment due on this property would be $592.68.  Write a program that
asks the user to input the actual value of a piece of property and then
the current tax rate for each $100 of assessed value.  The program should
then calculate and report how much annual property tax a senior homeowner
will be charged for this property and what the quarterly tax bill will be.
Hint: the assessment value is 60% of the property's actual value.

Author: Aaron Maynard
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // Declare variables
    double propertyValue, assessmentValue, propertyTax, quaterlyPayment;

    // User input
    cout << "Enter the value of the property: ";
    cin >> propertyValue;

    // Do the math
    assessmentValue = propertyValue * 0.60;
    propertyTax = ((assessmentValue - 5000) / 100) * 2.64;
    quaterlyPayment = propertyTax / 4;

    // Print to screen
    cout << setprecision(2) << fixed;
    cout << "You will pay: $" << propertyTax << " annual property tax" << endl;
    cout << "Your quarterly payments will be: $" << quaterlyPayment << endl;

    return 0;
}
