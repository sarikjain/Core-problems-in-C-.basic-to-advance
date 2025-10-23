#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){


    int hour,min,time;
    int dephour,depmin,deptime;
    int sec;
    int sec1;
    cin>>hour>>min>>time;
    cin>>dephour>>depmin>>deptime;


  sec=(hour*3600)+(min*60)+time;
  sec1=(dephour*3600)+(depmin*60)+deptime;

  sec=sec1-sec;
int b=sec;

  hour=sec/3600;
  sec=sec%3600;
min=sec/60;
  time=sec%60;


    cout<<hour<<":"<<min<<":"<<time<<endl;

    int cost;
   min=b/60;
   min=(min+9)/10;
    cost=min*100;
    cout<<"cost is "<<cost<<endl;













































    

















}


















































