#include <iostream>
using namespace std;




int main() {
int arr[10]={1,3,4,5,5,6,5,5,5,7};
int brr[10];
int k=0;
int freq=1;
for(int i=0;i<10;i++){

    for(int j=0;j<10-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
}

 

for(int i=0;i<10;i++){
    freq=1;
    for(int j=i+1;j<10;j++){
        if(arr[j]==arr[i]){
            freq++;
        }
    }
    while(arr[i]==arr[i+1]){
        i++;
    }
    brr[k]=freq;
    k++;

}
for(int i=0;i<6;i++){
    cout<<brr[i]<<endl;
}














































}
