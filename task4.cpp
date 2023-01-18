#include<iostream>
using namespace std;
string abbrevate( char code);
float charges(int num_of_min, char code, string time);
 int num_of_min_use(int num_of_min, string time, char code);
main()
{
  char code;
  int num_of_min;
  string code1;
  int num_of_min_use1;
  string time;
  float charges1;
  

  cout<<"Enter code: ";
  cin>>code;
  cout<<"Enter minutes you use: ";
  cin>>num_of_min;
  cout<<"Enter time: ";
  cin>>time;
  code1 = abbrevate( code);
  charges1= charges( num_of_min,  code,  time);
  num_of_min_use1=  num_of_min_use( num_of_min, time,  code);
  cout<<"you use "<<code1<<" serves"<<endl;
  cout<<"The number of telephone serves used: "<<num_of_min_use1<<endl;
  cout<<"total charges are: "<<charges1<<"$";
}
 string abbrevate( char code)
 {
    if (code=='N')
    {
        return "Normal";
    }
    else if (code=='P')
    {
        return "Premium";
    }
    return 0;
 }
  float charges(int num_of_min, char code, string time)
  { 
    int total;
    int a;
    if(code=='N')
    {
      if(num_of_min<=50)
    {
        total=10.00;
        return total;
    }
    if(num_of_min>50)
    {
        a=num_of_min-50;
        total=a*0.2+10.0;
        return total;
    }
    }
    if(code=='P'  )
    {
      if(time=="day")
      {
      if(num_of_min<=75)
    {
        total=25.00;
        return total;
    }
    if(num_of_min>75)
    {
        a=num_of_min-75;
        total=a*0.1+25.00;
        return total;
    }
    }
    if(time=="night")
      {
      if(num_of_min<=100)
    {
        total=25.00;
        return total;
    }
    if(num_of_min>100)
    {
        a=num_of_min-100;
        total=a*0.05+25.00;
        return total;
    }
    }
    }
    
    
  }
   int num_of_min_use(int num_of_min, string time, char code)
   {
    int serves;
    if(code=='N')
    {
      serves=num_of_min-50;
      return serves;
    }
    if(code=='P')
    {
      if(time=="day")
      {
       serves=num_of_min-75;
       return serves;
      }
      
    
      if(time=="night")
      {
      serves=num_of_min-100;
      return serves;
      }
    }
    return 0;
   }