#include <windows.h>
#include <iostream>
#include <conio.h>
using namespace std;
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
int main(){
	int row,opc;
	do{
	system("cls");
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
					row--;	//row=row-1  row-=1
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
	system("cls");
	//cout<<row<<"\n";
	}while (row!=6);
	gotoxy(10,10);
}
