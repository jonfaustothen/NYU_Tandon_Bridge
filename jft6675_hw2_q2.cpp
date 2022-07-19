/*This program calculates how many coines equals an amount entered by the user.*/

#include <iostream>
using namespace std;

int main(){
 
    int dollars, cents, total;
    double quarters, dimes, nickels, pennies;
    int remainingAmount;

    cout<<"Please enter your amount in the format of dollars and cents separated by a space: "<<endl;
    cin>>dollars>>cents;
    
    total = (dollars * 100) + (cents);

    quarters = total / 25;
    remainingAmount = total % 25;

    dimes = remainingAmount / 10;
    remainingAmount = remainingAmount % 10;

    nickels = remainingAmount / 5;
    remainingAmount = remainingAmount % 5;

    pennies = remainingAmount / 1;

    cout<<dollars<<" dollars and "<<cents<<" cents are:\n"<<quarters<<" quarters,"<<dimes<<" dimes,"<<nickels<<" nickels, and "<<pennies<<" pennies."<<endl;
    
       return 0;
}