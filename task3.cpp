#include<iostream>
using namespace std;
string star(int days, string month);
main()
{
    int days;
    string month;
    string zodiac;

    cout<<"Enter day: ";
    cin>>days;
    cout<<"Enter month: ";
    cin>>month;
    zodiac=star(days, month);
    cout<<zodiac;
    cout<<endl;
    cout<<"People born on this data have zodiac "<<zodiac;
}
string star(int days, string month)
{
    if( (days>=21 && days<=31)||(days>=1 && days<=19))
    {
        if(month=="martch" || month=="april")
        {
          return "Aries";
        }
        
    }
    if( (days>=20 && days<=30)||(days>=1 && days<=20))
    {
        if(month=="may" || month=="april")
        {
          return "Taurus";
        }
        
    }
    if( (days>=21 && days<=31)||(days>=1 && days<=20))
    {
        if(month=="may" || month=="june")
        {
          return "Gemini";
        }
        
    }
    if( (days>=21 && days<=30)||(days>=1 && days<=22))
    {
        if(month=="june" || month=="july")
        {
          return "Cancer";
        }
        
    }
    if( (days>=23 && days<=31)||(days>=1 && days<=22))
    {
        if(month=="july" || month=="august")
        {
          return "Leo";
        }
        
    }
    if( (days>=23 && days<=31)||(days>=1 && days<=22))
    {
        if(month=="august" || month=="september")
        {
          return "Virgo";
        }
        
    }
    if( (days>=23 && days<=30)||(days>=1 && days<=22))
    {
        if(month=="september" || month=="october")
        {
          return "Libra";
        }
        
    }
    if( (days>=23 && days<=31)||(days>=1 && days<=21))
    {
        if(month=="october" || month=="november")
        {
          return "Scropio";
        }
        
    }
    if( (days>=22 && days<=30)||(days>=1 && days<=21))
    {
        if(month=="november" || month=="december")
        {
          return "Sagittarius";
        }
        
    }
    if( (days>=22 && days<=31)||(days>=1 && days<=19))
    {
        if(month=="december" || month=="junuary")
        {
          return "Capricon";
        }
        
    }
    if( (days>=20 && days<=31)||(days>=1 && days<=18))
    {
        if(month=="junuary" || month=="february")
        {
          return "Aquarius";
        }
        
    }
    if( (days>=19 && days<=28)||(days>=1 && days<=20))
    {
        if(month=="martch" || month=="february")
        {
          return "Pisces";
        }
        
    }
    
 return 0;
}