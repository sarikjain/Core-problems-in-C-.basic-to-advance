   
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int newe(int x){

if(x==1||x==2){
    return 1;
}
else{
    return newe(newe(x-1))+newe(x-newe(x-1));
}



}







int main(){
//newman conway sequence
int n;
cin >>n;



for(int i=1;i<=n;i++){




    cout<<newe(i)<<" ";
}



























}




























