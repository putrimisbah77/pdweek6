#include <iostream>
using namespace std;
float result( int phy, int math, int chem, int bio, int eng);
char grade(float per);
string grade2(float per);
main()
{
    int phy;
    int math;
    int chem;
    int bio;
    int eng;
    string name;
    float total;
    float per;
    char grade1;
    string grade3="";

    cout<<" Enter your name:";
    cin>>name;
    cout<<" Enter physics number:";
    cin>>phy;
    cout<<" Enter mathematics number:";
    cin>>math;
    cout<<" Enter chemistry number:";
    cin>>chem;
    cout<<" Enter biology number:";
    cin>>bio;
    cout<<" Enter english number:";
    cin>>eng;
    total = result( phy, math, chem, bio, eng);
    per = (total*100)/500;
    // grade1 = grade( per);
    grade3 = grade2( per);
    cout<<name<<" your total marks is "<<total<<" with percentage "<<per<<"% and your grade is"<<grade3;
    
} 
  float result( int phy, int math, int chem, int bio, int eng)
  {
    int total = phy + math + chem + bio + eng;
    return total;
  }
   char grade(float per)
   {
    if(per<40)
    {
        return 'F';
    }
    else if(per>=40 && per<=50)
    {
        return 'D';
    }
    else if(per>=51  && per<=60)
    {
        return 'C';
    }
    else if(per>=61 && per<=70)
    {
        return 'B';
    }
    
    else if(per>=81 && per<=90)
    {
        return 'A';
    }
    else
    {
        return ' ';
    }
    
    return 0;
   }
   string grade2(float per)
   {
    if(per>=71 && per<=80)
    {
        return "B+";
    }
    else if(per>=91 && per<=100)
    {
        return "A+";
    }
    else
    {
      return " ";
    }
    // return 0;
   }