   
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){

int arr[5]={1,2,3,4,5};


//kadens algorithm;
int sum=0,maxsum=INT32_MIN;

for(int i=0;i<5;i++){

sum=sum+arr[i];
maxsum=max(sum,maxsum);
if(sum<0){

    sum=0;
}







}


cout<<maxsum;



}































































