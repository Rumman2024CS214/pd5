#include<iostream>
#include<iomanip>
using namespace std;
float taxcalculate(char code,int price);
main()
{
    char code;
    int price;
    float total;
    cout<<"Enter the vehicle type code(M,E,S,V,T): ";
    cin>>code;
    cout<<"Enter the price of vehicle: $";
    cin>>price;
    total=taxcalculate(code,price);
    cout<<"The final price of a vehicle of type "<<code<<" after adding the tax is: $"<<fixed<<setprecision(2)<<total;
}

float taxcalculate(char code,int price)
{
    float tprice,taxprice;
    if(code=='M')
    {
        taxprice=price*6/100;
        tprice=price+taxprice;
    }
    else if(code=='E')
    {
        taxprice=price*8/100;
        tprice=price+taxprice;
    }
    else if(code=='S')
    {
        taxprice=price*10/100;
        tprice=price+taxprice;
    }
    else if(code=='V')
    {
        taxprice=price*12/100;
        tprice=price+taxprice;
    }
    else if(code=='T')
    {
        taxprice=price*15/100;
        tprice=price+taxprice;
    }
    return tprice;
}