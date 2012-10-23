#include <iostream>
#include <windows.h>
#include <math.h>
#include <conio.h>
#define PI 3.14159265359	
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
	gotoxy(cx,cy);
	cout<<ch;
	gotoxy(cx,cy+r);
	cout<<ch;
	gotoxy(cx,cy-r);
	cout<<ch;
	gotoxy(cx+r,cy);
	cout<<ch;
	gotoxy(cx-r,cy);
	cout<<ch;
	//pruebas
	gotoxy(cx-(r*cosn(45)),cy-(r*seno(45)));
	cout<<ch;
	gotoxy(cx-(r*cosn(15)),cy-(r*seno(15)));
	cout<<ch;
	gotoxy(cx+(r*cosn(45)),cy-(r*seno(45)));
	cout<<ch;
	gotoxy(cx+(r*cosn(15)),cy-(r*seno(15)));
	cout<<ch;
	gotoxy(cx-(r*cosn(45)),cy+(r*seno(45)));
	cout<<ch;
	gotoxy(cx-(r*cosn(15)),cy+(r*seno(15)));
	cout<<ch;
	gotoxy(cx+(r*cosn(45)),cy+(r*seno(45)));
	cout<<ch;
	gotoxy(cx+(r*cosn(15)),cy+(r*seno(15)));
	cout<<ch;
	if(r>8){
		gotoxy(cx-(r*cosn(30)),cy-(r*seno(30)));
		cout<<ch;
		gotoxy(cx-(r*cosn(60)),cy-(r*seno(60)));
		cout<<ch;
		gotoxy(cx+(r*cosn(30)),cy-(r*seno(30)));
		cout<<ch;
		gotoxy(cx+(r*cosn(60)),cy-(r*seno(60)));
		cout<<ch;
		gotoxy(cx-(r*cosn(30)),cy+(r*seno(30)));
		cout<<ch;
		gotoxy(cx-(r*cosn(60)),cy+(r*seno(60)));
		cout<<ch;
		gotoxy(cx+(r*cosn(30)),cy+(r*seno(30)));
		cout<<ch;
		gotoxy(cx+(r*cosn(60)),cy+(r*seno(60)));
		cout<<ch;
	}
}

int main(){
	cout<<"Presione ENTER para inciar la onda";
	char opc;
	do{
		opc=getch();
	}while (opc!=13);
	while(true){
	system("cls");
	int r;
	gotoxy(40,12);
	cout<<"*";
		for (r=4;r<13;r+=2){
			circle(r);
			Sleep(400);
			circle(r,40,12,' ');
		}
	}
	gotoxy(80,24);
}