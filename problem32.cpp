#include <iostream>
#include <string>
using namespace std;

int main() {
//Bitwise operators  part 1 
int n;
cout<<"enter the number : "<<endl;
cin>>n;
if(n&1==1){
    cout<<"the number is odd "<<endl;

}
else{
    cout<<"the number is even "<<endl;
}


//swapping using XOR

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
a=a^b;
b=a^b;
a=a^b;

   


    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;










  }























