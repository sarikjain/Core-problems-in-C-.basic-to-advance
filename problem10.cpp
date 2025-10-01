#include<iostream>
using namespace std;

int main(){
//finding greatest number and smallest number among three given numbers 


int num1;
cout<<"enter number 1: ";
cin>>num1;
int num2;
cout<<"enter number 2: ";
cin>>num2;
int num3;
cout<<"enter number 3: ";
cin>>num3;
int great;
int small;
great=num1;
small=num1;
if(num2>great){
    great=num2;
}
if(num3>great){
    great=num3;
}
if(num2<small){
    small=num2;
    
}


if(num3<small){
    small=num3;

}


cout<<"greatest number among the three numbers is : "<<great<<endl;
cout<<"smallest number among the three numbers is : "<<small<<endl;
}








