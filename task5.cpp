#include <iostream>
using namespace std;
float price(string day, string fruit, float quantity);
main()
{
    string day;
    string fruit;
    float quantity;
    float total;

    cout<<"Enter days: ";
    cin>>day;
    cout<<"Enter fruit: ";
    cin>>fruit;
    cout<<"Enter quantity: ";
    cin>>quantity;
    total=price(day, fruit, quantity);
    cout<<total;

}
 float price(string day, string fruit, float quantity)
 {
    float total;
    if(day=="monday" || day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday")
    {
      if(fruit=="banana")
      {
        total=quantity*2.50;
        return total;
      }
      if(fruit=="apple")
      {
        total=quantity*1.20;
        return total;
      }
      if(fruit=="orange")
      {
        total=quantity*0.85;
        return total;
      }
      if(fruit=="grapfruit")
      {
        total=quantity*1.45;
        return total;
      }
      if(fruit=="kiwi")
      {
        total=quantity*2.70;
        return total;
      }
      if(fruit=="pineapple")
      {
        total=quantity*5.50;
        return total;
      }
      if(fruit=="grapes")
      {
        total=quantity*3.85;
        return total;
      }
    }
     if(day=="saturday" || day=="sunday" )
    {
      if(fruit=="banana")
      {
        total=quantity*2.70;
        return total;
      }
      if(fruit=="apple")
      {
        total=quantity*1.25;
        return total;
      }
      if(fruit=="orange")
      {
        total=quantity*0.90;
        return total;
      }
      if(fruit=="grapfruit")
      {
        total=quantity*1.60;
        return total;
      }
      if(fruit=="kiwi")
      {
        total=quantity*3.00;
        return total;
      }
      if(fruit=="pineapple")
      {
        total=quantity*5.60;
        return total;
      }
      if(fruit=="grapes")
      {
        total=quantity*4.20;
        return total;
      }
    }
    return 0;
    
 }