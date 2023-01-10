#include<iostream>
using namespace std;
float firm(int days, int hour, int worker);
main()
{
    int days;
    int hour;
    int worker;
    int total1;
    float full;
    cout<<"enter the number of days have given to firm to complete the project"<<endl;
    cin>>days;
    cout<<"enter the number of hours"<<endl;
    cin>>hour;
    cout<<"enter the number of worker"<<endl;
    cin>>worker;
    total1=firm(days,hour,worker);
     if(total1>hour)
       {
        full=total1-hour;
        cout<<"Yes!"<<full<<""<<":we have remaining hours"<<endl;
       }
       if(total1<hour)
       {
        full=hour-total1;
        cout<<"NO!"<<full<<""<<"we need hours to complete"<<endl;
       }
    
}
float firm(int days,int hour,int worker)
{
  int training;
  float total;
  float nowork;
     training=(days*24);
     nowork=(training*10) /100;
     total=training - nowork;
     return total;
    
}