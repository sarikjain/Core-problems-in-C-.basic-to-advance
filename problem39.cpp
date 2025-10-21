#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
//single number problem in array
int arr[11]={1,2,3,4,5,6,7,8,8,8,9};


for(int i=0;i<11;i++){
int flag=0;
for (int j=0;j<11;j++){
if(arr[i]==arr[j]){
flag++;

}
}
if(flag==1){
    cout<<arr[i];
}






}




}





















