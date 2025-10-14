#include <iostream>
#include <string>
using namespace std;

int main() {
   //LCM of two numbers and GCD of two numbers 

int a;
int b;
int c,d;
int gcd;
int lcm;
cout<<"Enter number 1: "<<endl;
cin>>a;
cout<<"Enter number 2: "<<endl;

cin>>b;
for(int i=min(a,b);i>1;i--){
c=a%i;
d=b%i;
gcd=i;

if(c==0 && d==0){
    break;
}

}


cout<<"GCD of two numbers is : "<<gcd<<endl;

lcm=(a*b)/gcd;
cout<<"LCM of two numbers is : "<<lcm<<endl;











 






}












