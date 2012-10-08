#include <windows.h>
#include <iostream>
#include <conio.h>
#include <math.h>
#include <string>
#define PM_DEF "Presione \"Enter\" para salir\n"

using namespace std;
#include "prime.inc"


void pr_primos(){
	unsigned long x,n;
	double y;
	x=0;
	y=0;
	cout <<"Ingrese el numero maximo\n\n";
	cout << "Numero Maximo: ";
	cin >> n;
	system("cls");
	for (x=1;x<=n;x++) {
		if (prime(x)==1){
			cout<<x;
			cout<<"\n";	
		}
	}
}


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

int printmenu(int row=2){
	short int opc;
	const short int c0=10;
	const short int r=2;
	short int r0=r;
	gotoxy(c0,r0++);
	cout<<"  ";
	cout<<" Generar numeros primos";
	gotoxy(c0,r0++);
	cout<<"  ";
	cout<<" Menu 2";
	gotoxy(c0,r0++);
	cout<<"  ";
	cout<<" Menu 3";
	gotoxy(c0,r0++);
	cout<<"  ";
	cout<<" Menu 4";
	gotoxy(c0,r0++);
	cout<<"  ";
	cout<<" Salir";
	gotoxy(c0,r0);
	mksquare(c0-1,40,r-1,r0);
	do{
		gotoxy(10,row);
		cout<<"->";
		opc = getch();
		gotoxy(10,row);
		cout<<"  ";
		switch (opc) {
  		case '8':
				if (row==2){
					row=6;
				}else{
					row--;	
				} 
				break;
  		case '2':
				if (row==6){
					row=2;
				}else{
					row++;	
				}
				
		    	break;
 		}

	}while (opc!='\r');
	return row;	
}


int main(){
	short int sel=2;
	do{
	system("cls");
	sel = printmenu(sel);
	system("cls");
	switch (sel) {
  		case 2:	pr_primos();
				pause(PM_DEF);
				break;
  		case 3:
				//cout<<"Accion del menu 2\n";
				cout<<sizeof(short);
				pause();
		    	break;
		case 4:
				//cout<<"Accion del menu 3\n";
				cout<<sizeof(double long);
				pause();
		    	break;
		case 5:
				//cout<<"Accion del menu 4\n";
				cout<<sizeof(char);
				pause();
		    	break;
 		}
	}while (sel!=6);
	system("cls");
}
