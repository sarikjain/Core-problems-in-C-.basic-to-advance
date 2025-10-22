#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
int n=5;
int arr[n]={1,2,2,3,3};


for (int i=0;i<n;i++){



    for(int j=i+1;j<n;j++){


        if(arr[i]==arr[j]){

for(int k=j;k<n;k++){

arr[k]=arr[k+1];

}
n--;

}


}
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;




























}






















    

















}


















































