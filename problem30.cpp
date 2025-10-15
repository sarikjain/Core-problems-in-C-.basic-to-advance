#include <iostream>
#include <string>
using namespace std;

int main() {
//pallindrome in string
string s;
cout<<"Enter a string : "<<endl;
cin>>s;

int g=0;
int n=s.length();
for(int i=0;i<=(n/2)-1;i++){
  if(s[i]==s[n-i-1]){
g=1;

  }
  else{
    g=0;
  }

}
  

if(g==1){
    cout<<"Its a pallindrome "<<endl;
}
else{
    cout<<"Its not a pallindrome "<<endl;
}



















  }























