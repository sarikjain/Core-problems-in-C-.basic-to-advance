#include<iostream>
using namespace std;
#include<math.h>

int main(){
//reversing a number  and digit to words

//reversing a number 
int num;
cout<<"enter number whose reverese you need : "<<endl;
cin>>num;
int a;
cout<<"enter how many digits is your number : "<<endl;
cin>>a;
int num1=num;


int b;
int flag=0;



for(int i=0;i<a;i++){
b=num%10;
num=num/10;
cout<<b;

}
cout<<endl;
//digit to words
cout<<"digit to words : "<<endl;


for(int i=0;i<a;i++){
b=num1%10;
num1=num1/10;
if(b==1){
flag=1;
}
else if(b==2){
flag=2;
}
else if(b==3){
flag=3;
}
else if(b==4){
flag=4;
}
else if(b==5){
flag=5;
}
else if(b==6){
flag=6;
}
else if(b==7){
flag=7;
}
else if(b==8){
flag=8;
}
else if(b==9){
flag=9;}
if(flag==1){
cout<<"one ";
}
else if(flag==2){
cout<<"two ";
}
else if(flag==3){
cout<<"three ";
}
else if(flag==4){
cout<<"four ";
}
else if(flag==5){
cout<<"five ";
}
else if(flag==6){
cout<<"six ";
}
else if(flag==7){
cout<<"seven ";
}
else if(flag==8){
cout<<"eight ";
}
else if(flag==9){
cout<<"nine ";

}

}




}








