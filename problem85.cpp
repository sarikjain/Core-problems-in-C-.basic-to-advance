#include <iostream>
using namespace std;



bool isprime(int x){
for(int i=2;i<x;i++){
if(x%i==0){
    return false;
}

} 
return true; 
}






int main(){



int num;
cin>>num;
int arr[num];
int num1=num;

int idx=0;
for(int i=2;i<=num;i++){
while(num1%i==0 && isprime(i)){
   num1=num1/i;
arr[idx]=i;
idx++;

}

}


int n=idx+1;
int prime[num];
int idx2=0;
for(int i=0;i<idx;i++){


if(arr[i]!=arr[i+1]){
    prime[idx2]=arr[i];
    idx2++;

}








}

for(int i=0;i<idx2;i++){
    cout<<prime[i]<<" ";
}
























    
}