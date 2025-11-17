#include <iostream>
using namespace std;

bool pallindrome(string s,int st,int end){
if(st>=end){
    return true;
}

if(s[st]==s[end]){
    return pallindrome(s,st+1,end-1);
}




return false;












}



int main(){






string s="sarras";
int st=0;int end=5;
bool k = pallindrome(s,st,end);
if(k){
    cout<<"Pallindrome";
}
else{
    cout<<"not a pallindrome";
}








    
}