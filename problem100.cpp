#include <iostream>

using namespace std;

int temp[6];
void merge1(int st,int end,int mid,int arr []){
    int j=mid+1;
    int idx=0;
    int st1=st;
while(st1<=(mid) && j<=end){
    if(arr[st1]>arr[j]){
temp[idx]=arr[j];
idx++;
j++;
}
else{
        temp[idx]=arr[st1];
        idx++;
        st1++;

        
    }
}

while(st1<=(mid)){
    temp[idx]=arr[st1];
    idx++;
    st1++;
}
while(j<=end){
    temp[idx]=arr[j];
    idx++;
    j++;
}

for(int k=0;k<idx;k++){
arr[st+k]=temp[k];
}



}






void sort1(int st,int end,int arr[]){
if(st<end){
int mid=st+(end-st)/2;



sort1(st,mid,arr);
sort1(mid+1,end,arr);
merge1(st,end,mid,arr );



}


}



int main(){
//merge sort
int n=6;
int arr[n]={1,3,2,4,5,6};
sort1(0,n-1,arr);
for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
}




















}
