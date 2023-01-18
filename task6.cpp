#include <iostream>
using namespace std;
float studio(string month, int num_of_stay);
float apartment(string month, int num_of_stay);
float discount(float studio1, int num_of_stay , string month);
float discount3(float apartment1, int num_of_stay);
main()
{
    string month;
    int num_of_stay;
    float studio1;
    float apartment1;
    float discount1=0;
    float discount2=0;

    cout<<"Enter name of month: ";
    cin>>month;
    cout<<"Enter number of stying days: ";
    cin>>num_of_stay;
    studio1=studio( month, num_of_stay);
    apartment1= apartment(month, num_of_stay);
    discount1= discount( studio1, num_of_stay , month);
    discount2 = discount3(apartment1, num_of_stay);

    cout<<"studio: "<<discount1;
    cout<<endl;
    cout<<"apartment: "<<discount2;

}
 float studio(string month, int num_of_stay)
 {
    float total;
    if(month=="may" || month=="october")
    {
       total=num_of_stay * 50;
      
    }
    if(month=="june" || month=="september")
    {
       total=num_of_stay * 75.20;
       
    }
    if(month=="july" || month=="august")
    {
       total=num_of_stay * 76;
      
    }
    return total;
 }
 float apartment(string month, int num_of_stay)
 {
    float total;
    if(month=="may" || month=="october")
    {
       total=num_of_stay * 65;
    }
    if(month=="june" || month=="september")
    {
       total=num_of_stay * 68.70;
    }
    if(month=="july" || month=="august")
    {
       total=num_of_stay * 77;
    }
    return total;
 }
 float discount(float studio1, int num_of_stay , string month)
 {  
    float discount2=0;
    float discount1=0;
    if(num_of_stay>7 && num_of_stay<=14 && (month=="may" || month=="october"))
    {
      discount1 = studio1 * 0.05;
      discount2=studio1-discount1;
    }
    if(num_of_stay>14 && (month=="may" || month=="october"))
    {
      discount1 = studio1 * 0.3;
      discount2=studio1-discount1;
    }
    if(num_of_stay>14 && (month=="june" || month=="september"))
    {
      discount1 = studio1 * 0.2;
      discount2=studio1-discount1;
    }
    else
    {
      discount2 = studio1;
      
    }
    
    return discount2;
 }
 float discount3(float apartment1, int num_of_stay)
 {
    float discount1;
    float discount2;
    if(num_of_stay>14)
    {
      discount1 = apartment1 * 0.1;
      discount2=apartment1-discount1;
    }
    if(num_of_stay=14)
    {
      discount2 = apartment1 ;
     
    }
   return discount2;
 }