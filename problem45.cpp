#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    
unsigned num=0xcafe;

int four=num&0xf;
    
   cout<<four<<endl;
   
   
   int eight=num & 0xff;
    cout<<eight<<endl;


int count=0;
int temp=four;

while(temp>0){
if((temp & 1)==1){

count++;

}
temp=temp>>1;

}
if(count>=2){
    cout<<"yes"<<endl;

}
int revnibble= ((four<<12)) | ((num & 0x00f0)<<4) |((num & 0x0f00)>>4)|((num& 0xf000)>>12);
cout<<hex;
cout<<revnibble;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}















    



































































