   
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
int maxsum=INT32_MIN;
int arr[5]={1,2,3,4,5};

for(int st=0;st<5;st++)
{

    int sum=0;
for(int end=st;end<5;end++){
sum=sum+arr[end];

maxsum=max(maxsum,sum);








}

}
cout<<maxsum;



































}




























