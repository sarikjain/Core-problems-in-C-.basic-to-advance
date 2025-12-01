#include <iostream>
using namespace std;

int arr[6]={1,2,3};
int st=0;
int last1=5;
int last=3;
void pushback(int x){
    if(last<=last1){
arr[last]=x;
last++;
    }
}
void popback(){
last=last-1;
}
void print(){
    for(int i=st;i<last;i++){
        cout<<arr[i]<<endl;
    }
}





int main(){
 //stacks
pushback(4);
popback();
pushback(8);
pushback(3);

popback();
 print();





















}
