   
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
int n=6;
int arr[10][10];


arr[0][0]=1;

cout<<arr[0][0]<<endl;

for(int i=1;i<n;i++){
arr[i][0]=arr[i-1][i-1];
cout<<arr[i][0]<<" ";

for(int j=1;j<=i;j++){

arr[i][j]=arr[i][j-1]+arr[i-1][j-1];
cout<<arr[i][j]<<" ";




}
cout<<endl;





}





































}

























