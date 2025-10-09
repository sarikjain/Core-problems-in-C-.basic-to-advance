#include <iostream>
#include <math.h>
using namespace std;

int main() {
//Number conversion



//Decimal to octadecimal

int decimal;

int arr[32];
cout<<"Enter decimal number : "<<endl;
cin>>decimal;

int b;
int i=0;
while(decimal>0){
    
b=decimal%8;
decimal=decimal/8;

arr[i]=b;
i++;
}
cout<<"The given number in octadecimal is "<<endl;
for(int j=i-1;j>=0;j--){
    cout<<arr[j];
} 

cout<<endl;
//Binary to octadecimal


int binary;
int b1;
int digits;
cout<<"enter binary number : "<<endl;
cin>>binary;
cout<<"enter no of digits : "<<endl;
cin>>digits;
int sum=0;

for(int i=0;i<digits;i++){

b1=binary%10;
binary=binary/10;
if(b1==1){
sum=sum+pow(2,i);
}


}
cout<<"decimal number is : "<<sum<<endl;





int decimal1=sum;


int arr1[32];


int h;
int k=0;
while(decimal1>0){
    
h=decimal1%8;
decimal1=decimal1/8;

arr1[k]=h;
k++;
}
cout<<"The given number in octadecimal is "<<endl;
for(int j=k-1;j>=0;j--){
    cout<<arr1[j];
} 




























}
