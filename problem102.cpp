#include <iostream>
#include<algorithm>
using namespace std;

int sum=0;
int sumof(int x){
if(x==0){
    return sum;
}

int b=x%10;
sum=sum+b;
sumof(x/10);














}




int main(){

int a=1232;
int b=sumof(a);
cout<<b;






















}