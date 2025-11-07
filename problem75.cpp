

#include <bits/stdc++.h>
using namespace std;
#include<vector>
#include<set>

int main() {

    vector<int> a={-1,0,1,2,-1,-4};
    vector<vector<int>>v;
    set<vector<int>>s;
    int n=a.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){

for(int k=j+1;k<n;k++){



    if(a[i]+a[j]+a[k]==0){
      vector<int> trip={a[i],a[j],a[k]};
      sort(trip.begin(),trip.end());

      if(s.find(trip)==s.end()){
        s.insert(trip);
        v.push_back(trip);
      }






    }
}



        }
    }

for(vector<int> val :v){
int s=val.size();
for(int i=0;i<s;i++){
    cout<<val[i]<<" ";
}

cout<<endl;



}
























}



















