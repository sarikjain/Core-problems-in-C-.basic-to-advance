

#include <bits/stdc++.h>
using namespace std;
#include<vector>
#include<set>
bool issorted(int arr[],int x){



    if(x==0){
        return true;
    }

if(arr[x]>=arr[x-1]){


return issorted(arr,x-1);



}
else{
    return false;
}




}

int main() {
   int a[6]={1,2,3,3,5,4}; 
int n=6;
   bool ans= issorted(a,n);
   cout<<ans;





}



















