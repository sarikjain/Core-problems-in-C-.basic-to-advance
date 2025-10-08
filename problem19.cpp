#include <iostream>
using namespace std;

int main() {
//Number conversion



//Decimal to binary
int decimal;

int arr[32];
cout<<"Enter decimal number : "<<endl;
cin>>decimal;

int b;
int i=0;
while(decimal>0){
    
b=decimal%2;
decimal=decimal/2;

arr[i]=b;
i++;
}
cout<<"The given number in binary is "<<endl;
for(int j=i-1;j>=0;j--){
    cout<<arr[j];
} 

cout<<endl;

























}
