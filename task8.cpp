#include <iostream>
using namespace std;
string graph(int h, int x, int y);
main()
{
    int h;
    int x;
    int y;
    string result;

    cout<<"Enter value of h: ";
    cin>>h;
    cout<<"Enter value of x: ";
    cin>>x;
    cout<<"Enter value of y: ";
    cin>>y;
    result = graph(h, x, y);
    cout<<result;
}
 string graph(int h, int x, int y)
 {
    if((x==h*0 || x==h*1 || x==h*2 ||x==h*3) && (y>=0 && y<=h*1))
    {
        return "border";
    }
    else if((x>=h*0 && x>=h*3) && (y==h*0 || y==h*1))
    {
        return "border";
    }
    else if((x>=h*1 && x<=h*2) && (y==h*1 || y==h*2 || y==h*3 ||y==h*4))
    {
        return "border";
    }
    else if((x==h*1 || x==h*2) && (y<=h*1 && y>=h*4))
    {
        return "border";
    }
    else if(((x>0 && x<h*1) || (x>h*1 && x<h*2) || (x>h*2 && x<h*3)) && (y>0 && y<h*1))
    {
        return "inside";
    }
    else if((x>h*1 && x<h*2) && ((y>h*1 && y<h*2) || (y>h*2 && y<h*3) || (y>h*3 && y<h*4)))
    {
        return "inside";
    }
    else
    {
        return "outside";
    }
    return 0;
 }  