#include <iostream>
#include <windows.h>
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
int main(){
	int i,j,k,l;
	while(true){
		if (i==101){
			i=1;
		}
		for(j=1;j<21;j++){
			if (i%2==0){
				gotoxy(j,15);
				cout<<" ";
				gotoxy(j,15);
				cout<<char(1);
				Sleep(50);
				gotoxy(j,15);
				cout<<" ";
			}else{
				gotoxy(21-j,15);
				cout<<" ";
				gotoxy(21-j,15);
				cout<<char(18);
				Sleep(50);
				gotoxy(21-j,15);
				cout<<" ";	
			}
		}
		i++;
	}
}
