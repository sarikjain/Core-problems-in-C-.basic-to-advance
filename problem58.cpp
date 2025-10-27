   
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
int x;
cin>>x;
int n;
cin>>n;
int ans=1;
if(n<0)
{
    x=1/x;
    n=-n;
}
while(n>0){
if((n&1)==1){
    ans=ans*x;
}
x=x*x;
n=n>>1;


}
cout<<ans;











}


























































































































