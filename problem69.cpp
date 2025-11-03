#include <bits/stdc++.h>
using namespace std;



bool issame(int arr[],int brr[]){

for(int i=0;i<26;i++){

    if(arr[i]!=brr[i]){
return false;
    }
}

return true;




}






int main() {
int ans=0;
string s1="abbayr";
string s2="zs";
int freq[26]={0};
for(int i=0;i<s2.length();i++){

freq[s2[i]-'a']++;


}
int windsize=s2.length();

int idx=0;
while(idx<s1.length()){
int windfreq[26]={0};
for(int i=idx;i<(s2.length()+idx);i++){

windfreq[s1[i]-'a']++;

}
idx++;


if(issame(freq,windfreq)){
   ans=1;
    break;
}

}
cout<<ans;




















}



































