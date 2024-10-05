#include<iostream>
using namespace std;
string projecttime(int nhours,float days ,int workers);
main()
{
    int nhours,workers;
    float days;
    string output;
    cout<<"Enter the needed hours: ";
    cin>>nhours;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of workers: ";
    cin>>workers;
    output=projecttime(nhours,days,workers);
    cout<<output;
    
}

string projecttime(int nhours,float days,int workers)
{
    string strng;
    float training;
    float workinghours;
    int whperworker,workerhour;
    int left,need;
    training=days*10/100;
    workinghours=days-training;
    workerhour=workers*10;
    whperworker=workerhour*workinghours;
    if(whperworker<nhours)
    {
        need=nhours-whperworker;
        strng="No!"+to_string(need)+" hours needed.";
    }
    else if(whperworker>nhours)
    {
        left=whperworker-nhours;
        strng="Yes!"+to_string(left)+" hours left.";
    }
    return strng;
}