

#include <bits/stdc++.h>
using namespace std;

int main() {
    
int arr[4]={1,2,3,4};
int target =5;
int sum=0;
int j=0;
while(j<4){
for(int i=j+1;i<4;i++){

sum=arr[j]+arr[i];
if(sum==target){
    cout<<i<<" "<<j<<endl;
}

}
j++;

}

























}


