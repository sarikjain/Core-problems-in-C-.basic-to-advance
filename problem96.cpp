#include <iostream>
using namespace std;


int check(int x){

int count=0;
while(x>0){

    if(x&1){
        count++;
    }
    
    
    
    
    
    
    x=x>>1;
}






return count;

}
int factorial(int x){

if(x==1){
    return 1;
}







return x*factorial(x-1);


}
int main() {
int num1;
int num2;
cin>>num1>>num2;
int a,b;

a=factorial(num1);
b=factorial(num2);









for(int i=b;i<=a;i++){


if(check(i)%2!=0){
cout<<i<<endl;





}




















}




















}
