#include <iostream>
#include <windows.h>
#include <math.h>
#include <conio.h>
#include <string>
#define PI 3.14159265359	
#define GR 9.81
#define CX 76
#define CY 20
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
void pause(string msg=""){
	short int a;
	cout<<msg;
	do{
		a=getch();
	}while (a!='\r');
}
float seno(float ang){
	return sin(ang*PI/180);
}
float isin(float ang){
	return asin(ang*PI/180);
}
float cosn(float ang){
	return cos(ang*PI/180);
}
float tang(float ang){
	return tan(ang*PI/180);
}
void xline(int size,int x0=0,int y0=0){
	for (int i=0;i<size;i++)
	{
		gotoxy(x0+i,y0);
		cout<<"-";
	}
}
void yline(int size,int x0=0,int y0=0){
	for (int i=0;i<size;i++)
	{
		gotoxy(x0,y0+i);
		cout<<"|";
	}
}
int main(){
	system("cls");
	float cnt,cn_y;
	float v=40;//m/s
	float ang = 25;//grados
	cout<<"Ingrese angulo inicial y velocidad inicial separados por 1 espacio (14 34)";
	cin>>ang>>v;
	system("cls");
	float x=((v*v)*seno(2*ang))/GR;
	float y=((v*v)*seno(ang)*seno(ang))/(2*GR);
	float s=(2*v*seno(ang))/GR;
	gotoxy(10,23);
	cout<<"Distancia = "<<x<<"m\t";
	cout<<"Altura = "<<y<<"m\t";
	cout<<"Tiempo = "<<s<<"s\t";
	if (y>20)
	{
		cn_y = CY/y;
	} 
	else
	{
		cn_y = 1;
	}
	y=y*cn_y;
	yline(y,42,22-y);
	xline(80,0,21);//Dibuja el eje x
	yline(24,3,0);//Dibuja el eje y
	cnt=0;
	for(int i=4;i<80;i++){
		y=((v*seno(ang)*cnt)-((GR*cnt*cnt)/2))*cn_y;
		gotoxy(i,20-y);
		cnt+=(float)s/CX;
		cout <<'*';
	}
	pause();
}