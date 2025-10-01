#include<iostream>
using namespace std;

int main(){
//print prime numbers between two numbers 
int num1;
cout<<"enter number 1: ";
cin>>num1;
cout<<"enter number 2: ";
int num2;
cin>>num2;
int flag=0;

cout<<"prime numbers between number  1 and number 2 : "<<endl;

for(int i=num1+1;i<num2;i++){

    

       for(int j=2;j<i;j++){
if(i%j!=0){
flag=1;
}
else{
    flag=0;
    break;
}
       }
if(flag==1){
    cout<<i<<endl;
}

    }
  






















}
