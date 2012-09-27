#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
char LeftVal = 'K';
char RightVal = 'M';
char UpVal = 'H';
char DownVal = 'P';

int main()
{
char keyhit;
int ascii;
    while ( true )
    {
        if ( kbhit() )
        {
            keyhit = getch();
            cout << keyhit;
            ascii = int(keyhit);
        }


        if ( ascii == -32 )
        {
            keyhit = getch();
            cout << endl << keyhit;
            if ( keyhit == LeftVal )
                cout << "Left Arrow Pressed!";
            if ( keyhit == RightVal )
                cout << "Right Arrow Pressed!";
            if ( keyhit == UpVal )
                cout << "Up Arrow Pressed!";
            if ( keyhit == LeftVal )
                cout << "Down Arrow Pressed!";
        }
     }
return 0;
}
