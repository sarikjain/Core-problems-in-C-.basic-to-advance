#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
//single number problem in vector
vector <int> ver={1,3,3,4,4};
int s=0;
for(int i:ver){

s=s^i;


}

cout<<s;


}





















