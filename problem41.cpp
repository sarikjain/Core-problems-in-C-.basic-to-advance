#include <iostream>
#include <string>
#include <vector>
using namespace std;

void hanoitower(int n,char source ,char med,char target){


if(n>0){

hanoitower(n-1,source,target,med );
cout<<"Move a disc"<<n<<" from" <<source<<"to" <<target <<endl;
hanoitower(n-1,med,source,target);










}












}




int main() {
    //Hanoi tower
    int n;char A='A',B='B',C='C';
    cin>>n;

hanoitower(n,A,B,C);




















}





















