

#include <bits/stdc++.h>
using namespace std;

int main() {

int arr[3][3]={{1,2,3},{4,2,6},{7,8,9}};
int sum=45;
int b;
int sum1=0;

unordered_set <int>s;
for(int i=0;i<3;i++){


    for(int j=0;j<3;j++){
sum1=sum1+arr[i][j];

if(s.find(arr[i][j])!=s.end()){
    cout<<arr[i][j]<<endl;
    b=arr[i][j];

    

}
else{
    s.insert(arr[i][j]);
}

}


}
int c=sum+b-sum1;

cout<<c;









}



















