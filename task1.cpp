#include <iostream>
using namespace std;
string activity(string temperature, string humidity);
main()
{
    string temperature;
    string humidity;
    string result;

    cout<<"Enter temperature: ";
    cin>>temperature;
    cout<<"Enter humidity: ";
    cin>>humidity;
    result = activity( temperature,  humidity);
    cout<<result;
}
string activity(string temperature, string humidity)
{
    if(temperature=="warm" && humidity=="dry")
    {
        return "play tennis";
    }
    if(temperature=="warm" && humidity=="humid")
    {
        return "swim";
    }
    if(temperature=="cold" && humidity=="dry")
    {
        return "play basketball";
    }if(temperature=="cold" && humidity=="humid")
    {
        return "watch tv";
    }
    return 0;
}