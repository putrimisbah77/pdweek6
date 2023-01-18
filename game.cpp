#include <iostream>
using namespace std;
void printmaze();
char getCharAtxy(short int x, short int y);
void gotoxy(int x, int y);
void erase(int x, int y, char previous);
void printpacman(int x, int y);
void printgost(int x, int y);
main()
{
    int gx=1;
    int gy=1;
    string direction="right";
    char previouschar=' ';
    system("cls");
    printmaze();
    printgost(gx, gy);
    while(true)
    {
        Sleep(100);
        if(direction=="right")
        {
            char nextLocation=getCharAtxy(gx+1, gy);
            if(nextLocation='%')
            {
                direction="left";
            }
            else if(nextLocation==' ' || nextLocation=='.')
            {
                erase(gx, gy, previouschar);
                gx=gx+1;
                previouschar=nextLocation;
                printgost(gx, gy);
            }

        }
        if(direction=="left")
        {
            char nextLocation=getCharAtxy(gx-1, gy);
            if(nextLocation='%')
            {
                direction="right";
            }
            else if(nextLocation==' ' || nextLocation=='.')
            {
                erase(gx, gy, previouschar);
                gx=gx-1;
                previouschar=nextLocation;
                printgost(gx, gy);
            }

        }
    }

}
 void printmaze()
 {
   cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%                                 "<<endl;
   cout << "%                                % "<<endl;
   cout << "%                                % "<<endl;
   cout << "%                                % "<<endl;
   cout << "%                                % "<<endl;
   cout << "%                                % "<<endl;
   cout << "%                                % "<<endl;
   cout << "%                                % "<<endl;
   cout << "%                                % "<<endl;
   cout << "%                                % "<<endl;
   cout << "%                                % "<<endl;
   cout << "%                                % "<<endl;
   cout << "%                                % "<<endl;
   cout << "%                                % "<<endl;
   cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%                                % "<<endl;

 }
 char getCharAtxy(short int x, short int y)
 {
  CHAR_INFO ci;
  COORD xy = {0,0};
  SMALL_RECT rect = {x, y, x, y};
  COORD coordBufSize;
  coordBufSize.X = 1;
  coordBufSize.Y = 1;
  return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';

  
 }
 void gotoxy(int x, int y)
 {
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 }
 void erase(int x, int y, char previous)
 {
   gotoxy(x,y);
   cout <<previous;
 }
 void printpacman(int x, int y)
 {
   gotoxy(x,y);
   cout << "P";
 }
 void printgost(int x, int y)
 {
   gotoxy(x,y);
   cout << "G";
 }