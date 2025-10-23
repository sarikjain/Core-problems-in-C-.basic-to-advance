   
#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;







int sum (int x){
if(x==1){
    return 2;
}
else{



return sum(x-1)+2*x;
}

}
int main()
{

int n;
cin>>n;
cout<<sum(n);




















}

































































