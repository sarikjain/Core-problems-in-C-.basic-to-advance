#include <iostream>
using namespace std;


int main(){
    //Adding one to each digit in the given number 
    int num;
    int digit;
    int output;
    int b;
    cout<<"write any number on which you want to perform this task: "<<endl;
    cin>>num;
    cout<<"enter how many digit is your number : "<<endl;
    cin>>digit;
    int a[digit];

    for(int i=0;i<digit;i++){
b=num%10;
num=num/10;
a[i]=b+1;


    }
cout<<"output after adding one to each digit is "<<endl;
for(int i=digit-1;i>=0;i--){
cout<<a[i];
}
}
