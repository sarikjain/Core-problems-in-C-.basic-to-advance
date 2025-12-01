#include <iostream>
#include<algorithm>
using namespace std;





int main(){
int arr[6]={1,4,5,7,3,2};
int n=6;
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

/*insertion sort

for(int i=1;i<n;i++){
    
int current=i;
int prev=i-1;
while(prev>=0 && arr[i]<arr[prev]){
    
swap(arr[i],arr[prev]);
i--;
prev--;
}














}

*/













for(int i=0;i<n;i++){
cout<<arr[i]<<endl;


}





















}
