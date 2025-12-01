#include <iostream>
#include<algorithm>
using namespace std;



int max1;
int highk(int arr[],int x){
   int i=x-1;
   if(i==9){
      max1=arr[i];
   }
   if(x==1){
     return max1;
      }

   
int j=i-1;
if(max1<arr[j]){
   max1=arr[j];
}
   
   
   
   
   
   
   
  highk(arr,x-1);



















}











int main(){

int arr[10]={1,2,3,4,5,6,7,15,9,10};
int b=highk(arr,10);
cout<<b;

























}