#include <iostream>
#include <string>
using namespace std;

int main() {




    int a = 5;
    for (int i = 0; i < 10; i++) {
        a = a + i;
    }
    cout << a << endl;
    return 0;
//output=230




    int b = 5;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 5; j++) {
            b = b + i + j;
        }
    }
    cout << b << endl;
    return 0;

//output=330




    int c = 5;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 5; k++) {
                c = c + i + j + k;
            }
        }
    }
    cout << c << endl;
    return 0;
//output=275





  }























