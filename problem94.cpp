#include <iostream>
using namespace std;
int factorial(int n){
if(n==1){
    return 1;
}

return n*factorial(n-1);










}
int sum=0;
int sumfactorial(int x){




if(x==1){
    return sum+1;
}
else{
    sum=sum+factorial(x);
    sumfactorial(x-1);
}








}



int main() {
cout<<sumfactorial(4);





















}
