#include<iostream>
using namespace std;
#include<math.h>

int main(){
//swapping two numbers 
int a=5;
int b=10;
cout<<"the values of a and b before swapping are "<<a<<" and "<<b<<" respectively"<<endl;
int temp;
temp=a;
a=b;
b=temp;
cout<<"the values of a and b after swapping are "<<a<<" and "<<b<<" respectively"<<endl;

//printing table of any number 
int num;
cout<<"enter the number, you want to print the table "<<endl;
cin>>num;

cout<<"the table is "<<endl;
for(int i=1;i<11;i++){
cout<<num<<"*"<<i<<"="<<num*i<<endl;

}




}








