#include<iostream>
using namespace std;

int main(){
//meriging two arrays 

int arr1[9]={1,2,3,4,5,6,7,8,9};
int arr2[5]={16,17,18,19,100};

int merge[100];
for(int j=0;j<5;j++){


for(int i =0;i<9;i++){
merge[i]=arr1[i];

}
merge [j+9]=arr2[j];
}

cout<<"array 1 is : "<<endl;
for(int i=0;i<9;i++){
    cout<<arr1[i]<<endl;
}
cout<<"array 2 is : "<<endl;
for(int j=0;j<5;j++){

    cout<<arr2[j]<<endl;
}

cout<<"merged array of arr1 and arr2 is : "<<endl;
for(int k=0;k<14;k++){


cout<<merge[k]<<endl;

}







    



}








