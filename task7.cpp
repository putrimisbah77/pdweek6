#include <iostream>
using namespace std;
main()
{
    int h;
    int m;
    int h1;
    int m1;
    int h2;
    int m2;
    int m3;

    cout<<"Enter starting time (hour): ";
    cin>>h;
    cout<<"Enter starting time (minutes): ";
    cin>>m;
    cout<<"Enter hour of arrival: ";
    cin>>h1;
    cout<<"Enter minutes of arrival: ";
    cin>>m1;

    h2 = h - h1;
    m2 = m - m1;
    m3 = 60 - m2;

   if(h2==0 && m2==0)
   {
    cout<<"On time";
   }
   if(h2==0 && m2<0)
   {
    cout<<"Late"<<endl;
    cout<<-m2<<" mintues after the start.";
   }
   if(h2<0 && m2<0)
   {
    cout<<"Late"<<endl;
    cout<<-h2<<":"<<-m2<<" hourse after the start.";
   }
   if(h2>0 && m2>=0)
   {
    cout<<"Early"<<endl;
    cout<<h2<<":"<<m2<<" hourse before the start.";
   }
   if(h2==0 && m2>0)
   {
    cout<<"Early"<<endl;
    cout<<m2<<"minutes before the start.";
   }
   if(h2<0 && m2>=0)
   {
    cout<<m3<<" minutes after start.";
   }
   if(h2>0 && m2<0)
   {
    m3 = 60 - m1 + m;
    cout<<m3<<" minutes after start.";
   }

}