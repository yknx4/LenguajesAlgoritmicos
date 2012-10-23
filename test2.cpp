#pragma hdrstop
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

//---------------------------------------------------------------------------

#pragma argsused

void gotoxy(short int column,short int line )
{
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(
		GetStdHandle( STD_OUTPUT_HANDLE ),
		coord
		);
}
int main(int argc, char* argv[])
{
        double i; //Counter for the for loop
        double x; //X-Position of the Parabola
        double y; //Y-Position of the Parabola
        double t; //Time
        double alpha; //Angle of the "throw"
        double v0; //Initial speed

        v0 = 20;
        alpha = 45;

        t = 2 * (v0 * sin(alpha) / 9.81);
        t = ceil(t);

        for(i=0; i<=t; i+=0.1)
        {
                x = v0 * cos(alpha) * i;
                y = -0.5 * 9.81 * (i*i) + v0 * sin(alpha) *i;

                if((int)y > 0)
                {
                        gotoxy((int)x,25-(int)y);
                        printf("*");
                }
        }


        getch();

        return 0;
}
