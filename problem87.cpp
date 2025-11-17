#include <iostream>
using namespace std;

char rod1='A';//smallest
char rod2='B';
char rod3='C';//biggest;

void hanoi(int n,char x,char y,char z){

if(n==1){
    cout<<"moving disc 1 from"<<x<<"to"<<z<<endl;
return ;}




hanoi(n-1,x,z,y);
cout<<"Moving Disc"<<n<<"from "<<x<<"to"<<z<<endl;
hanoi(n-1,y,x,z);





}





int main(){

int n;
cin>>n;

hanoi(n,rod1,rod2,rod3);












    
}