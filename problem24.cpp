#include<iostream>
using namespace std;

int main(){
    
 /*
 A full prime number is one tht itself is prime and all the digits in it are also prime 
 */
int temp,temp1;
int a,b;
int flash=0;
int flash1=0;
int d;
cout<<"Enter a number1: "<<endl;
cin>>a;
cout<<"Enter a number2: "<<endl;
cin>>b;
cout<<"prime numbers between these two numbers are : "<<endl;
 for(int i=a+1;i<b;i++){
flash=0;
for(int j=2;j<i;j++){
    if(i%j==0){
flash=1;
    }
}
if(flash==0){
    temp=i;
    flash1=0;  
while(temp>0){
d=temp%10;
temp=temp/10;
if(d==1)d=d+3;
for(int k=2;k<d;k++){
    if(d%k==0||d==1){
        flash1=1;
    }

}
}
if(flash1==0){
    cout<<i<<endl;

 }
 



}

}























}









