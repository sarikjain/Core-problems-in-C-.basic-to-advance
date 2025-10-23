#include <string>
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int res;

int recurison(int x,int y){

    if(y==0){
        return 1;
    }else{
res=(recurison(x,y-1))*x;
    }
return res;

}

int main(){
    
    
    




int c=recurison(2,3);

cout<<c;




























}




























