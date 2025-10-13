#include <iostream>
#include <string>
using namespace std;

int main() {
   
//pallindrom
int num;
int m;
int c=0;
cout<<"Enter the number : "<<endl;
cin>>num;
int b=num;

while(num>0){
   m= num%10;
   c=c*10+m;
   num=num/10;
}

if(b==c){
    cout<<"its a pallindrom"<<endl;
}
else{
    cout<<"its not a pallindrome "<<endl;
}

}
    



















