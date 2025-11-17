#include <iostream>
using namespace std;

int newman(int x){

if(x==1 ){
  return 1;
}
else if(x==2){
  return 1;
}





 return newman(newman(x-1))+newman(x-newman(x-1));











}







int main(){


int n;
cin>>n;

cout<<newman(n);















    
}