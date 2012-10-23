#include <iostream>
#include <windows.h>
#include <math.h>
#include <conio.h>
#define PI 3.14159265359	
//#define PI 3.1416
using namespace std;

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
float seno(float ang){
	return sin(ang*PI/180);
}
float cosn(float ang){
	return cos(ang*PI/180);
}
void circle(int r,int cx=40,int cy=12,char ch='o'){
	//pruebas
	int x,y;
	for(int i=1;i<359;i++){
		x=cx+(r*cosn(i));
		y=cy+(r*seno(i));
		if ((x>80)||(y>24)||(x<0)||(y<0))
		{
			continue;
		}
		//cout<<x<<" - "<<y<<endl;
		gotoxy(x,y);
		cout<<ch;
	}
}
int main(){
	char opc;
	int r;	
	system("cls");
	cout<<"Presione ENTER para inciar la onda";
	gotoxy(40,0);
	cout<<"0";
	do{
		opc=getch();
	}while (opc!=13);
	system("cls");
	for (int j=0;j<13;j++){
		gotoxy(40,j);
		cout<<"0";
		Sleep(50);
		gotoxy(40,j);
		cout<<" ";
	}
	for (r=4;r<40;r++){
		circle(r);
		circle(r-2);
		Sleep(100);
		circle(r-3,40,12,' ');
		circle(r,40,12,' ');
		}
	circle(r,40,12,' ');
	gotoxy(0,0);
}