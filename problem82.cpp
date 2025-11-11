#include <iostream>
#include <vector>
#include<string>
using namespace std;


bool issafe(vector <string> &board,int n,int row,int j){
for(int i=0;i<n;i++){

if(board[row][i]=='Q'){
    return false;
}
}
for(int i=0;i<n;i++){
    if(board[i][j]=='Q'){
        return false;
    }
}
for(int i=row, k=j;i>=0 && k>=0 ;i--,k--)

{
    if(board[i][j]=='Q'){
        return false;
    }
}

for(int i=row, k=j;i>=0 && k<n ;i--,k++)

{
    if(board[i][j]=='Q'){
        return false;
    }
}

return true;







}







void isqueen(vector <string> &board,int n,int row,vector <vector<string>> ans){
    if(row==n){
    ans.push_back({board});
    return;
    }
for(int j=0;j<n;j++){


if(issafe(board,n,row,j)){
    board[row][j]='Q';
    isqueen(board,n,row+1,ans);
    board[row][j]='.';

}


}



}


int main() {
 int n=3;
vector <vector<string>> ans;
vector <string> board(n,string(n,'.') );

isqueen(board,n,0,ans);

  


















}
