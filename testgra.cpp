//#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <gdiplusgraphics.h>

int main()
{
	// Set the graphics mode
	int graphdriver = DETECT, graphmode;
	initgraph(&graphdriver, &graphmode, "c:\\tc\\bgi");

	double end_x = (double)getmaxx();
	double end_y = (double)getmaxy();
	double x = 0;
	double y = 0;
	int prev_x=0;
	int prev_y=0;

	// Draw the parabola
	for (x=-1*(int)(end_x/2); x<(int)(end_x/2); x+=.1)
	{
		// substitute this equation with your entered values
		y = .03*(x*x);
		// .03 used to make the current parabola look nicer

		/*
		** 1) Drawn in BLUE - straight drawing of the parabola
		** the coordinates of the screen have the (0,0) in the top right corner
		** and (end_x, end_y) in the bottom left corner
		** If you draw only using the values it appears upside down and to the left
		*/
		putpixel((int)x, (int)y, BLUE);

		/*
		** 2) Drawn in RED - drawing of the parabola and flipping it the right way
		** using the end_(x,y) - (x,y) we draw the parabola the correct way
		** It is still offset to the wrong side of the screen though
		*/
		putpixel((int)(end_x-x), (int)(end_y-y), RED);

		/*
		** 3) Drawn in WHITE - correct drawing of the parabola
		** using 2) and then subtracting (end_(x,y)/2) we are able to
		** place the parabola in the center of the screen ie that location
		** is now the coordinates (0,0)
		*/
		//putpixel((int)(end_x-x) - (int)(end_x/2.0), (int)(end_y-y) - (int)(end_y/2.0), WHITE);
		line((int)(end_x-x) - (int)(end_x/2.0), (int)(end_y-y) - (int)(end_y/2.0), prev_x, prev_y);

		// when using line() we need to remember the prev x,y values
		prev_x = (int)(end_x - x) - (int)(end_x/2.0);
		prev_y = (int)(end_y - y) - (int)(end_y/2.0);
	}

	// Close the graphics mode.
	getch();
	closegraph();
	return 0;
}