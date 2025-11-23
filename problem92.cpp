#include <iostream>
using namespace std;




int main() {
int arr[10]={1,3,4,5,5,6,5,5,5,7};
int mode=INT16_MIN;
int freq=1;
int j;

for(int i=0;i<10;i++){

freq=1;


    for(int j=i+1;j<10;j++){
if(arr[i]==arr[j]){
    freq++;

}
}
mode=max(mode,freq);
if(mode==freq){
    j=arr[i];
}
}
cout<<mode<<endl;
cout<<j;


    
















































}
