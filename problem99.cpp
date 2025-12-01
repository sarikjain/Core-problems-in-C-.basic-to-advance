#include <iostream>
#include<algorithm>
using namespace std;





int main(){
int arr[7]={5, 4, 3, 2, 1, 7, 6};
int n=7;
//bubble sort
/*
 for(int i=0;i<n;i++){

for(int j=0;j<n-i-1;j++){
    if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;}
    }
    
    
    
    
    
    
}
*/
/*
selection sort
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
            }
            }
            */
           
           // insertion sort

           
/*
for(int i=1;i<n;i++){
    
int current=i;
int prev=i-1;
int idx=i;
while(prev>=0 && arr[idx]<arr[prev]){
    
swap(arr[idx],arr[prev]);
idx--;
prev--;
}














}


*/













for(int i=0;i<n;i++){
cout<<arr[i]<<endl;


}





















}
