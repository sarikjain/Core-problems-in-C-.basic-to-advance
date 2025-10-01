#include<iostream>
using namespace std;

int main(){
//factorial of given number 

int num;
cout<<"enter the number whose factorial you want : ";
cin>>num;

int num1;
num1=num;
for(int i=1;i<num1;i++){
    num=num*(num1-i);
}


cout<<"factorial of given number is :"<<num<<endl;
















}
