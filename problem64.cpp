  #include <bits/stdc++.h>
using namespace std;





bool isvalid(int arr[],int N,int mid,int M){
int painter=1; int time=0;

for(int i=0;i<N;i++){
    if(arr[i]>mid){
        return false;
    }
if((time+arr[i])<=mid){
    time=time+arr[i];

}
else{
    painter++;
    time=arr[i];
}
}

return  painter>M?false:true;


}

int main(){

int N;
cin>>N;
int M;
cin>>M;
int arr[N];
for(int i=0;i<N;i++){
    cin>>arr[i];
}
int sum=0;
int st=0;
for(int i=0;i<N;i++){
sum=sum+arr[i];

}
int ans=-1;
int end=sum;
while(st<=end){
int mid=st +(end-st)/2;


if(isvalid(arr,N,mid,M)){
ans=mid;
end=mid-1;






}
else{
    st=mid+1;
    
}
}
cout<<ans;
























































}



