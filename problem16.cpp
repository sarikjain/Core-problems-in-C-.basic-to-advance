#include<iostream>
using namespace std;
#include<math.h>

int main(){
//sum,average,maximum,second maximum in array
int arr[6]={1,2,3,47,89,34};
int sum=0;

//sum
for(int i=0;i<6;i++){
sum=sum+arr[i];
}
cout<<"sum of all elements in array is : "<<sum<<endl;
//average

float avg;
avg=sum/6.0;
cout<<"average of all elements in array is "<<avg<<endl;


//maximum
int max1;

max1=arr[0];
for(int i=0;i<6;i++){
    if(arr[i]>max1){
        max1=arr[i];

    }

}
cout<<"maximum number in given array is "<<max1<<endl;
//second maximum
int max2;
max2=arr[0];
for(int i=0;i<6;i++){
if(arr[i]<max1 && arr[i]>max2){
    max2=arr[i];
}
}
cout<<"second maximum number in given array is "<<max2<<endl;















}








