#include<iostream>
using namespace std;
#include<math.h>

int main(){
//sum of all digits in number 


int num;
cout<<"enter any number on which you want to perform operations : "<<endl;
cin>>num;
int digit;
cout<<"how many digits you have entered : "<<endl;
cin>>digit;
int b;
int sum=0;

//sum of all the digits 

for(int i=0;i<digit;i++){
b=num%10;
num=num/10;
sum=sum+b;
}

cout<<"sum of all the digits are :" <<sum<<endl;























}








