#include <windows.h>
#include <iostream>
#include <conio.h>
using namespace std;
void pause(){
	cin.get();
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
int printmenu(){
	int row,opc;
	row=2;
	gotoxy(10,2);
	cout<<"  ";
	cout<<" Menu 1";
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
	pause();
	int sel;
	do{
	system("cls");
	sel = printmenu();
	system("cls");
//	cout<<sel<<"\n";
	switch (sel) {
  		case 2:
				cout<<"Accion del menu 1\n";
				system("pause");
				break;
  		case 3:
				cout<<"Accion del menu 2\n";
				system("pause");
		    	break;
		    	case 4:
				cout<<"Accion del menu 3\n";
				system("pause");
		    	break;
		    	case 5:
				cout<<"Accion del menu 4\n";
				system("pause");
		    	break;
 		}
	}while (sel!=6);
	gotoxy(10,10);
}
