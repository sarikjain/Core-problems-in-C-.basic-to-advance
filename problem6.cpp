#include<iostream>
using namespace std;

int main(){
    //printing word digit of given two numbers
int a;
cout<<"enter two digit number: ";
cin>>a;


int first=a/10;
if (first==1)cout<<"one ";
else if (first==2)cout<<"two ";
else if (first==3)cout<<"three ";
else if (first==4)cout<<"four ";
else if (first==5)cout<<"five ";
else if (first==6)cout<<"six ";
else if (first==7)cout<<"seven ";
else if (first==8)cout<<"eight ";
else if (first==9)cout<<"nine ";


int second=a%10;

if (second==1)cout<<"one";
else if (second==2)cout<<"three";
else if (second==3)cout<<"two";
else if (second==4)cout<<"four";
else if (second==5)cout<<"five";
else if (second==6)cout<<"six";
else if (second==7)cout<<"seven";
else if (second==8)cout<<"eight";
else if (second==9)cout<<"nine";








}
