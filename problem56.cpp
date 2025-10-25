   
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){


int arr[7]={1,2,3,4,5,6,7};
int target ;
cin>>target;

int i=0,j=6;
while(i<j){
int sum=arr[i]+arr[j];
if(sum>target){
    j--;

}
else if(sum<target){
    i++;
}
else{
    cout<<arr[i]<<","<<arr[j]<<" ";
    break;
}



}








}


























































































































