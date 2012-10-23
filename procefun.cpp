#include <iostream>
#include <windows.h>
#include <conio.h>

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


void yline(int size,int x0=0,int y0=0){ //Imprime una linea vertical con un tamaño, y una coordenada inicial
	for (int i=0;i<size;i++)
	{
		gotoxy(x0,y0+i);
		cout<<"|";
	}
}

int sqr(int a){
	return a*a;
}
int main(){
	system("cls");
	char lol;
	yline(15,7,5);
	yline(4,9,10);

	cout<<"2 al cuadrado "<<sqr(2)<<endl;

}