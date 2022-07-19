/*This program adds the total time John and Bill worked together.*/

#include <iostream>
using namespace std;

int main(){
    const int day = 24 * 60;
    const int hour = 60;
    const int minute = 1;

    int johnDays, johnHours, johnMinutes;
    int billDays, billHours, billMinutes;
    int sumDays, sumHours, sumMinutes;
    int remainingMinutes, totalDays, totalHours, totalMinutes;

       cout<<"Please enter the number of days John has worked: "<<endl;
    cin>>johnDays;

        cout<<"Please enter the number of hours John has worked: "<<endl;
    cin>>johnHours;

        cout<<"Please enter the number of minutes John has worked: "<<endl;
    cin>>johnMinutes;

    cout<<"Please enter the number of days Bill has worked: "<<endl;
    cin>>billDays;

        cout<<"Please enter the number of hours Bill has worked: "<<endl;
    cin>>billHours;

        cout<<"Please enter the number of minutes Bill has worked: "<<endl;
    cin>>billMinutes;

    sumDays = johnDays + billDays;
    sumHours = johnHours + billHours;
    sumMinutes = johnMinutes + billMinutes;

    remainingMinutes = (sumDays * day) + (sumHours * hour) + (sumMinutes);

    totalDays = remainingMinutes / day;
    remainingMinutes = remainingMinutes % day;

    totalHours = remainingMinutes / hour;
    remainingMinutes = remainingMinutes % hour;

    totalMinutes = remainingMinutes;

    cout<<"The total time both of them worked together is: "<<totalDays<<" days, "<<totalHours<<" hours, and "<<totalMinutes<<" minutes."<<endl;
    
       return 0;
}