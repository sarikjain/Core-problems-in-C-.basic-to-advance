#include <iostream>
#include<algorithm>
using namespace std;






int main(){

string s="sarsarsarras";
string sub="sar";


int index=s.find(sub);
while(s.find(sub,index)!=-1){

cout<<index<<endl;
index=s.find(sub,index+1);
















}



























    
}