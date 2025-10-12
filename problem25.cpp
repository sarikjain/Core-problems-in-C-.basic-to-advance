#include <iostream>
#include <string>
using namespace std;

int main() {
    string month;
    int day, year;
    int dayNum = 0;

    cout << "Enter date (e.g., January 1 1994): ";
    cin >> month >> day >> year;

 int leap=0;
 if(year%4==0){
    leap=1;
 }
 else if(year%400==0 && year%100!=0){
    leap=1;
 }
    if (month == "January")
        dayNum = day;
    else if (month == "February")
        dayNum = 31 + day;                           //(leap ? 29: 28) ternary operator
    else if (month == "March")
        dayNum = 31 + (leap ? 29 : 28) + day;
    else if (month == "April")
        dayNum = 31 + (leap ? 29 : 28) + 31 + day;
    else if (month == "May")
        dayNum = 31 + (leap ? 29 : 28) + 31 + 30 + day;
    else if (month == "June")
        dayNum = 31 + (leap ? 29 : 28) + 31 + 30 + 31 + day;
    else if (month == "July")
        dayNum = 31 + (leap ? 29 : 28) + 31 + 30 + 31 + 30 + day;
    else if (month == "August")
        dayNum = 31 + (leap ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + day;
    else if (month == "September")
        dayNum = 31 + (leap ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + day;
    else if (month == "October")
        dayNum = 31 + (leap ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
    else if (month == "November")
        dayNum = 31 + (leap ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
    else if (month == "December")
        dayNum = 31 + (leap ? 29 : 28) + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;

    cout << "Day number: " << dayNum << endl;

    return 0;
}



















