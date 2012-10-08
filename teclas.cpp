#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;



int main ()
{

unsigned char cIn_1, cIn_2;
unsigned char up_1, up_2, down_1, down_2, left_1, left_2, right_1, right_2;

printf( "Initialization arrow keys \n");

printf( "Push up \n");
up_1 = _getch();
up_2 = _getch();

printf( "Push down \n");
down_1 = _getch();
down_2 = _getch();

printf( "Push left \n");
left_1 = _getch();
left_2 = _getch();

printf( "Push right \n");
right_1 = _getch();
right_2 = _getch();

		do
        {
                                cIn_1 = _getch(); //may also be just getch()
				cIn_2 = _getch();

				if ( cIn_1 == up_1 && cIn_2 == up_2) {
					printf( "up \n");
				
				}

				if ( cIn_1 == down_1 && cIn_2 == down_2) {
					printf( "down \n");
				
				}

				if ( cIn_1 == left_1 && cIn_2 == left_2) {
					printf( "left \n");
				
				}

				if ( cIn_1 == right_1 && cIn_2 == right_2) {
					printf( "right \n");
				
				}
				
        } while (cIn_1!='x' || cIn_2!='x');

		
}

