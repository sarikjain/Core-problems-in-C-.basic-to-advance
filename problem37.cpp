#include <iostream>
#include <string>
using namespace std;

int main() {

//classy problem  (2)

int n;
cout<<"Numbers you want to print"<<endl;
cin>>n;
int a=0;
int b=1;
int c;
int flash=1;
cout<<a<<endl<<b<<endl;

for(int i=2;i<n;i++){

c=a+b;
a=b;

b=c;


for(int j=2;j<c;j++){
if(c%j==0){
    flash=0;
break;
}
else{
flash=1;
}
}
if(flash==1 && c!=1){
    cout<<c<<endl;
}



}















}