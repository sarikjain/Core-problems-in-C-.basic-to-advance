#include<iostream>
using namespace std;

int main(){
//identifying even and odd numbers in arrry
int arr[10]={1,2,3,4,5};
int even=0;
int odd=0;
for(int i=0;i<5;i++){


if(arr[i]%2==0){
even++;
}
else if(arr[i]%2!=0){
    odd++;
}
}
cout<<"no of even numbers are "<<even<<endl;
cout<<"no of odd numbers are "<<odd<<endl;
cout<<"even numbers are"<<endl;
for(int i=0;i<5;i++){
    if(arr[i]%2==0){
        cout<<arr[i]<<endl;
    }
}
cout<<"odd numbers are"<<endl;
for(int i=0;i<5;i++){
    if(arr[i]%2!=0){
        cout<<arr[i]<<endl;
    }
}











}
