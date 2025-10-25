   
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){

//majority element


int arr[5]={2,2,1,1,1};

int count=0;
for (int i=0;i<5;i++){
count=0;

    for(int j=0;j<5;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }


if((count)>5/2){
    cout<<arr[i];
    break;
}


}







}


























































































































