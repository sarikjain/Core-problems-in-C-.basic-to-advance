#include <iostream>
#include <string>
using namespace std;

int main() {
//Reversing the string


string s="harry";
int temp;

for(int i=0;i<5/2;i++){

temp=s[i];
s[i]=s[5-i-1];
s[5-i-1]=temp;

}
cout<<s<<endl;

//vowels and consonents in the string


int vowels=0;
int consonents=0;

for(int i=0;i<5;i++){
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
    vowels++;
}
else{

consonents++;


}

}
cout<<"number of vowels are : "<<vowels<<endl;
cout<<"number of vowels are : "<<consonents<<endl;





































  

























  }























