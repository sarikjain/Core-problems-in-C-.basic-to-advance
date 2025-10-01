#include<iostream>
using namespace std;

int main(){
 int count=0;
    //increasing sorting of an array
    int arr[10]={2,1,3,54,34,12,13,14,20,14};
    cout<<"original array is "<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<endl;
    
    }
for(int j=0;j<10;j++){


for(int i=0;i<10;i++){
   if(arr[i+1]<arr[i])
{
    int temp;
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;

}

else{
    count++;
}
}


}
   
cout<<"sorted array is : "<<endl;
for(int i=0;i<10;i++){
    cout<<arr[i]<<endl;
    
}


}








