#include <windows.h>
#include <iostream>
#include <conio.h>
#include <math.h>
#include <string>
#define PM_DEF "Presione \"Enter\" para salir\n"
using namespace std;
#include "prime.inc"
void pause(string msg=""){
	int a;
	cout<<msg;
	do{
	a=getch();
	}while (a!='\r');
}

void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }
int printmenu(int row=2){
	int opc;
	gotoxy(10,2);
	cout<<"  ";
	cout<<" Generar numeros primos";
	gotoxy(10,3);
	cout<<"  ";
	cout<<" Menu 2";
	gotoxy(10,4);
	cout<<"  ";
	cout<<" Menu 3";
	gotoxy(10,5);
	cout<<"  ";
	cout<<" Menu 4";
	gotoxy(10,6);
	cout<<"  ";
	cout<<" Salir";
	gotoxy(10,2);
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
	int sel=2;
	do{
	system("cls");
	sel = printmenu(sel);
	system("cls");
	switch (sel) {
  		case 2:
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
				pause("Presione \'Enter\' para salir\n");
				break;
  		case 3:
				cout<<"Accion del menu 2\n";
				pause();
		    	break;
		case 4:
				cout<<"Accion del menu 3\n";
				pause();
		    	break;
		case 5:
				cout<<"Accion del menu 4\n";
				pause();
		    	break;
 		}
	}while (sel!=6);
	system("cls");
}
