#include <iostream>
using namespace std;



int main(){
//fibonacci series
int a=0;
int num;
int c;
int sum=0;

cout<<"enter how many numbers of fibonacci you want to print";
cin>>num;

int b=1;
cout<<a<<endl;
cout<<b<<endl;

for (int i=0;i<num-2;i++){

c=a+b;
sum=sum+c+1;
a=b;
b=c;
cout<<c<<endl;
}
cout<<"sum of fibonacci series is "<<sum;



//sum code is used in many projects and same concept of int count is used here






    
}