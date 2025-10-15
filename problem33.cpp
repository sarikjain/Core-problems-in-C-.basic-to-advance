#include <iostream>
#include <string>
using namespace std;

int main() {


//set,toggle,reset

int n;
cout<<"enter the number : "<<endl;
cin>>n;
int pos;
cout<<"enter position : "<<endl;
cin>>pos;



int set;

set=n|(1<<pos);
cout<<"set of the number is : "<<set<<endl;
int reset;
reset=n&~(1<<pos);


cout<<"reset of the number is : "<<reset<<endl;
int toggle;
toggle=n^(1<<pos);
cout<<"toggle of the number is : "<<toggle<<endl;

//count no of 1's in binary
int temp=n;
int count =0;
while(temp>0){
    if(temp &1 ==1){
count++;


    }

temp=temp>>1;
}
cout<<"no of ones are : "<<count;



















  }























