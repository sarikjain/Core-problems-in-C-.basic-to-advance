#include<iostream>
using namespace std;

int main(){
   //leap year and determining whether a number is prime or not
   //leap year

   int year;
   cout<<"enter year which you want to check"<<endl;
   cin>>year;

   if((year%400==0)||(year%4==0 && year%100!=0)){
    cout<<"this year is leap year "<<endl;
    }
    else {
        cout<<"this is not a leap year"<<endl;
    }
   

//prime number
int num;
int flag=0;
cout<<"enter the number you want to check whther its prime or not"<<endl;
cin>>num;

for(int i=2;i<num;i++){
if(num%i==0){
cout<<"this is composite number "<<endl;
flag=0;
break;
}
else {
  flag=1;
}

}

if(flag==1){
    cout<<"this is prime number"<<endl;
}

}
