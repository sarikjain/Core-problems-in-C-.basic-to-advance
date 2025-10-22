#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
int arr[5]={1,2,2,3,3};


bool count[5] ={false};

for(int i=0;i<5;i++){

    int fre=1;
   if(!count[i]){
for(int j=i+1;j<5;j++){

if(arr[i]==arr[j]){

fre++;
count[j]=true;
}

}



cout<<"frequency of the element "<<arr[i]<<" is "<<fre<<endl;
}



























    }


















}


















































