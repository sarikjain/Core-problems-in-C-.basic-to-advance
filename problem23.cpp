#include <iostream>
#include <math.h>
using namespace std;

int main() {
    
    
    /*
Given 2 numbers, perform bitwise xor and find the numberof ones in its binary representation 
of the result. If the input is 10 and 5, the output is 4. Write a program to display the answer for 
the given two numbers. 
*/
//a ^ b performs xor
//x & 1 checks wheter last bit is one 
//x >> 1 moves to next bit


int a,b;
cout<<"Enter first number : "<<endl;
cin>>a;
cout<<"Enter second  number : "<<endl;
cin>>b;
int x=a ^ b;
int count =0;
while(x>0){

if(x & 1 ){
    count++;

}
x=x>>1;
}
cout<<count;

























}















