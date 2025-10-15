#include <iostream>
#include <string>
using namespace std;

int main() {

//classy problem
int hours;
cout<<"Enter no of extra hours employee worked : "<<endl;
cin>>hours;
int child;
int total;
int negative;
int positive;

cout<<"Enter no of children employee has : "<<endl;
cin>>child;

total=(1200*30)+(hours*100);
positive=0.02*total;
negative=0.02*total+0.1*total+0.05*total;

cout<<"Total he earns"<<total<<endl;
total=total+positive-negative;
cout<<"Net money he take "<<total<<endl;





















  }























