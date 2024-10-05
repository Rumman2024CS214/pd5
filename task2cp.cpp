#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
float calculatevolume(string desire,float length,float width,float height);
main()
{
    float length,width,height,volume;
    string desire;
    cout<<"Enter the length of pyramid (in meters): ";
    cin>>length;
    cout<<"Enter the width of pyramid (in meters): ";
    cin>>width;
    cout<<"Enter the height of pyramid (in meters): ";
    cin>>height;
    cout<<"Enter the desired output unit (millitmeters, centimeters, meters, kilometers): ";
    cin>>desire;
    volume=calculatevolume(desire,length,width,height);
    if(desire=="millimeters")
    {
        cout<<"The volume of pyramid is: "<<fixed<<setprecision(3)<<volume<<" cubic millimeters";
    }
    if(desire=="centimeters")
    {
        cout<<"The volume of pyramid is: "<<fixed<<setprecision(3)<<volume<<" cubic centimeters";
    }
    if(desire=="meters")
    {
        cout<<"The volume of pyramid is: "<<fixed<<setprecision(6)<<volume<<" cubic meters";
    }
    if(desire=="kilometers")
    {
        cout<<"The volume of pyramid is: "<<fixed<<setprecision(3)<<volume<<" cubic kilometers";
    }
    
}


float calculatevolume(string desire,float length,float width,float height)
{
    double vol;
    vol=((length*width)*height)/3;
    if(desire=="millimeters")
    {
        vol=vol*1000*1000*1000;
    }
    else if(desire=="centimeters")
    {
        vol=vol*100*100*100;
    }
    else if(desire=="meters")
    {
        vol=vol;
    }
    else if(desire=="kilometers")
    {
        vol=vol/(1000*1000*1000);
    }
    return vol;
}