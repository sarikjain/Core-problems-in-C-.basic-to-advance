#include <iostream>
#include <math.h>
using namespace std;

int main() {
    //Matrices 
int a[3][3];


for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"enter the value of index "<<"("<<i<<","<<j<<")"<<endl;
        cin>>a[i][j];
    }
}
cout<<"[";
for(int i=0;i<1;i++){
    for(int j=0;j<3;j++){
     cout<<a[i][j]<<" ";
    }
}
cout<<"]"<<endl;
cout<<"[";
for(int i=1;i<2;i++){
    for(int j=0;j<3;j++){
     cout<<a[i][j]<<" ";
    }
}
cout<<"]"<<endl;
cout<<"[";
for(int i=2;i<3;i++){
    for(int j=0;j<3;j++){
     cout<<a[i][j]<<" ";
    }
}
cout<<"]"<<endl;



























}
