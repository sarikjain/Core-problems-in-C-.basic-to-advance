#include <iostream>
using namespace std;
bool isleapyear(int year){

if(year%400==0 || (year%4==0 && year%100!=0)){
    return true;
}

return false;

}


void nextday(int &month,int &day,int &year){
int day1=day;
if((month==4 || month==6 || month ==9 ||month==11) && month!=2 && day==30){
    month++;
    day=1;
}
else if( month!=2 && day==31){
    month++;
    day=1;
}
else if(month==2 && isleapyear(year)&&day==29){
month++;
day=1;
}
else if(month==2 && day==28 &&isleapyear(year)){
    day++;
}
else if(month==2 && day==28){
month++;
day=1;
}
else{
    day++;
}

if(month > 12){
    month = 1;
    year++;
}


cout<<"month :"<<month<<"day :"<<day<<"year :"<<year;








}








int main(){
int month;int year;int day;
cin>>month>>day>>year;
nextday(month,day,year);






























    
}