

#include <bits/stdc++.h>
using namespace std;

int main() {
int arr[5]={1,2,3,4,5};
int target=9;
unordered_map<int,int> m;

for(int i=0;i<5;i++){

int first=arr[i];
int second=target-first;

if(m.find(second)!=m.end()){
    cout<<i<< " "<<m[second];
}
else{

    m[first]=i;
    


}
















}

















}


