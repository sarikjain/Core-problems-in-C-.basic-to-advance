#include<iostream>
using namespace std;

int main(){

//inserting element,reversing, deleting element in array,swapping element of array
//reversing array
int arr[15]={1,2,3,4,5,6,7,8,9,10};
cout<<"array before reversing"<<endl;

for (int i=0;i<10;i++){
cout<<arr[i]<<endl;
}

cout<<"array after reversing"<<endl;

for (int i=0;i<5;i++){
    int temp;
    temp=arr[i];
    arr[i]=arr[10-i-1];
    arr[10-i-1]=temp;
    
}

for (int i=0;i<10;i++){
cout<<arr[i]<<endl;
}

//inserting an element and swapping
int index;
int insert;
cout<<"enter the index where you want to insert the number"<<endl;
cin>>index;
cout<<"enter the number you want to insert"<<endl;
cin>>insert;
int temp2;
for(int i=9;i>=index;i--){


arr[i+1]=arr[i];

}
arr[index]=insert;
cout<<"so the final array is :"<<endl;
for(int i=0;i<=10;i++){
    cout<<arr[i]<<endl;
}

   
//deleting element of array
int index2;
cout<<"enter the index you want to delete";
cin>>index2;
int g=index2;
int temp3;
temp3=arr[index2];

for(int i=g;i<=11;i++){
    arr[i]=arr[i+1];
  
}
cout<<"so the final array is :"<<endl;
for(int i=0;i<=10;i++){
    cout<<arr[i]<<endl;
}















}
