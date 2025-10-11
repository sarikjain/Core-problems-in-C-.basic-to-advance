#include <iostream>
#include <math.h>
using namespace std;

int main() {
    //Matrices multplication
int a[3][3];


for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"enter the value of index "<<"("<<i<<","<<j<<")"<<endl;
        cin>>a[i][j];
    }
}
cout<<"Matrice 1 is : "<<endl;
cout<<"[";
for(int i=0;i<1;i++){
    for(int j=0;j<3;j++){
     cout<<a[i][j]<<" ";
    }
}
cout<<"]"<<endl;
cout<<"[";
for(int i=1;i<2;i++){
    for(int j=0;j<3;j++){
     cout<<a[i][j]<<" ";
    }
}
cout<<"]"<<endl;
cout<<"[";
for(int i=2;i<3;i++){
    for(int j=0;j<3;j++){
     cout<<a[i][j]<<" ";
    }
}
cout<<"]"<<endl;




int a1[3][3];


for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<"enter the value of index "<<"("<<i<<","<<j<<")"<<endl;
        cin>>a1[i][j];
    }
}
cout<<"Matrice 2 is : "<<endl;

cout<<"[";
for(int i=0;i<1;i++){
    for(int j=0;j<3;j++){
     cout<<a1[i][j]<<" ";
    }
}
cout<<"]"<<endl;
cout<<"[";
for(int i=1;i<2;i++){
    for(int j=0;j<3;j++){
     cout<<a1[i][j]<<" ";
    }
}
cout<<"]"<<endl;
cout<<"[";
for(int i=2;i<3;i++){
    for(int j=0;j<3;j++){
     cout<<a1[i][j]<<" ";
    }
}
cout<<"]"<<endl;

int a2[3][3];
for(int i=0;i<3;i++){
    for (int j=0;j<3;j++){
        a2[i][j]=0;

    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        for (int k=0;k<3;k++){
            a2[i][j]=a2[i][j]+a[i][k]*a1[k][j];
        }
    }
}









cout<<"Multiplication is : "<<endl;

cout<<"[";
for(int i=0;i<1;i++){
    for(int j=0;j<3;j++){
     cout<<a2[i][j]<<" ";
    }
}
cout<<"]"<<endl;
cout<<"[";
for(int i=1;i<2;i++){
    for(int j=0;j<3;j++){
     cout<<a2[i][j]<<" ";
    }
}
cout<<"]"<<endl;
cout<<"[";
for(int i=2;i<3;i++){
    for(int j=0;j<3;j++){
     cout<<a2[i][j]<<" ";
    }
}
cout<<"]"<<endl;















}
