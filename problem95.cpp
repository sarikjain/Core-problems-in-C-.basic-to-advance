#include <iostream>
using namespace std;



int main() {
int arr[6]={5,3,15,9,6,13};
int max1=-1;
for(int i=0;i<6;i++){
    max1=-1;

for(int j=i+1;j<6;j++){

if(arr[j]>arr[i]){

    max1=max(max1,arr[j]);
}






}
cout<<max1<<endl;













}



















}
