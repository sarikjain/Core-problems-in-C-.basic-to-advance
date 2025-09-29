#include <iostream>
using namespace std;
int main(){

//finding how many prime numbers are there in certain range of numbers


int a=10;
int c;
int count=0;
int b=25;
int d=0;
int flag=0;


for(int i=1;i<15;i++){
int flag=0;
     c=10+i;
     
    for(int j=2;j<c;j++){
if(c%j==0){
    flag=1;

}
    }
    if(flag==0){
count++;
    }
}


cout<<count;

















}

