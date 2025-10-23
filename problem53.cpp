   
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int reverse(int x,int rev=0){


if(x==0){

    return rev;
}

int b;
b=x%10;
rev=rev*10+b;
return reverse(x/10,rev);








}











int main(){


int n;
cin>>n;


cout<<reverse(n);




























}
































































