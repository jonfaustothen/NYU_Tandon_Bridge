/*This program calculates from the user how many dollars and cents they have*/

#include <iostream>
using namespace std;

int main(){
       
    int quarters, dimes, nickels, pennies;
    int quartersCents, dimesCents, nickelsCents;
    int total, dollar, remainer;

    cout<<"Please enter number of coins.  Number of quarters: "<<endl;
    cin>>quarters;
    
    cout<<"Number of dimes: "<<endl;
    cin>>dimes;

    cout<<"Number of nickels: "<<endl;
    cin>>nickels;

    cout<<"Number of pennies: "<<endl;
    cin>>pennies;

    quartersCents = quarters * 25;
    dimesCents = dimes * 10;
    nickelsCents = nickels * 5;

    total = quartersCents + dimesCents + nickelsCents + pennies;
    dollar = total / 100;
    remainer = total % 100;
    
    cout<<"The total is "<<dollar<<" dollars and "<<remainer<<" cents."<<endl;
    
       return 0;
}