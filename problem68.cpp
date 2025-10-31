#include <bits/stdc++.h>
using namespace std;










int main() {

ios::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

    char arr[3][3];
    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){

            arr[i][j]='N';
        }
    }
    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){

            cout<<arr[i][j];
           
            
        }
        cout<<endl;
    }

    int count=1;
    bool iswinner =true;
while(iswinner){
int x,y;
cin>>x>>y;

if(x>2 || y>2){
    cout<<"Invalid case"<<endl;

}


if(count%2==0){
arr[x][y]='X';
count++;
}

else if(count%2!=0){
    arr[x][y]='O';
    count++;
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j];
       
        }
        cout<<endl;
    }







if((arr[0][0]==arr[1][1]) && (arr[1][1]==arr[2][2])&& (arr[0][0]!='N')){
    cout<<"You are the winner "<<endl;
    iswinner=false;
    
}
if((arr[0][2]==arr[1][1]) && (arr[1][1]==arr[2][0])&&(arr[0][2]!='N')){
    cout<<"You are the winner "<<endl;
    iswinner=false;

    
}
for(int i=0;i<3;i++){
    if((arr[i][0]==arr[i][1]) && (arr[i][1]==arr[i][2])&&(arr[i][0]!='N')){
    cout<<"You are the winner "<<endl;
    iswinner=false;
 
}

}

for(int i=0;i<3;i++){
    if((arr[0][i]==arr[1][i])&& (arr[1][i]==arr[2][i])&&(arr[0][i]!='N')){
    cout<<"You are the winner "<<endl;
    iswinner=false;
  
}

}






























}

















}
