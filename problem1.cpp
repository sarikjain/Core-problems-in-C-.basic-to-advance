#include <iostream>
using namespace std;


int main(){
//calculator using switch case
cout<<"To use calculator follow these commands properly"<<endl;
int a;
int b,c,o,l,t,p;
cout<<"enter number 1"<<endl;
cin>>b;
cout<<"enter number 2"<<endl;
cin>>c;
cout<<"type 1 for addition "<<endl;
cout<<"type 2 for subtraction "<<endl;
cout<<"type 3 for multiplication "<<endl;
cout<<"type 4 for division "<<endl;
cout<<"type 5 for remainder "<<endl;

cout<<"enter the number of case you want to implement"<<endl;
cin>>a;
switch (a)
{
case 1:
int d;
d=b+c;
cout<<"addition of two numbers is"<<d<<endl;
    /* code */
    break;
case 2:

o=b-c;
cout<<"subtraction of two numbers is"<<o<<endl;
    /* code */
    break;
case 3:

l=b*c;
cout<<"multiplication of two numbers is"<<l<<endl;
    /* code */
    break;
case 4:

t=b/c;
cout<<"Divison of two numbers is"<<t<<endl;
    /* code */
    break;
case 5:
p=b%c;
cout<<"remainder  is"<<p<<endl;
    /* code */
    break;
default:
cout<<"no case exists"<<endl;
    break;
}












}
