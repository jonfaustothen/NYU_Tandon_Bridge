/*This program reads from the user two positive integers and prints the result of various operations*/

#include <iostream>
using namespace std;

int main(){
    int first, second;
    int addOp, subtractOp, multiplyOp, divOp, modOp;
    double divideOp;

    cout<<"Please enter two positive integers, separated by a space: "<<endl;
    cin>>first>>second;

    addOp = first + second;
    subtractOp = first - second;
    multiplyOp = first * second;
    divideOp = (double) first / (double) second;
    divOp = first / second;
    modOp = first % second;

    cout <<first<<" + "<<second<<" = "<<addOp<< endl;
    cout <<first<<" - "<<second<<" = "<<subtractOp<< endl;
    cout <<first<<" * "<<second<<" = "<<multiplyOp<< endl;
    cout <<first<<" / "<<second<<" = "<<divideOp<< endl;
    cout <<first<<" div "<<second<<" = "<<divOp<< endl;
    cout <<first<<" mod "<<second<<" = "<<modOp<< endl;

    return 0;
}