#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void pause(string msg=""){
	short int a;
	cout<<msg;
	do{
	a=getch();
	}while (a!='\r');
}

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
void mksquare(int c0,int c1,int f0,int f1){
	int x,y;	
	for(x=1;x<(f1-f0);x++){
		//pause();
		gotoxy(c0,f0+x);
		cout<<char(186);
		gotoxy(c1,f0+x);
		cout<<char(186);		
	}
	for(y=1;y<(c1-c0);y++){
		//pause();
		gotoxy(c0+y,f0);
		cout<<char(205);
		gotoxy(c0+y,f1);
		cout<<char(205);
	}
	gotoxy(c0,f0);
	cout<<char(201);
	gotoxy(c1,f0);
	cout<<char(187);
	gotoxy(c0,f1);
	cout<<char(200);
	gotoxy(c1,f1);
	cout<<char(188);
}
int main(){

mksquare(1,74,1,23);
mksquare(4,46,5,18);
pause("Marck es bien mainstream");
}
