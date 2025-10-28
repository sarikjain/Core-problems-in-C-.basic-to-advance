   
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
//stock buy and sell problem
int arr[6]={7,1,5,3,6,4};

int maxprofit=0;
int bestbuy=arr[0];

for(int i=1;i<6;i++){

if(arr[i]>bestbuy){
maxprofit=max(maxprofit,arr[i]-bestbuy);



}




bestbuy=min(bestbuy,arr[i]);
}


cout<<maxprofit;

















}


























































































































