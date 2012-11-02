#include <iostream>
#include <windows.h>
#include <math.h>
#include <conio.h>
#include <string>
using namespace std;
void sumardos(){
	system("cls");
	int a,b;
	cout<<endl<<" Ingrese 2 numeros separados por un espacio "<<endl;
	cin>>a>>b;
	cout<<" La suma de los dos numeros es  "<<a+b<<endl;
	getch();

}
void restardos(){
	system("cls");
	int a,b;
	cout<<endl<<" Ingrese 2 numeros separados por un espacio "<<endl;
	cin>>a>>b;
	cout<<" La resta de los dos numeros es  "<<a-b<<endl;
	getch();

}
void multiplicardos(){
	system("cls");
	int a,b;
	cout<<endl<<" Ingrese 2 numeros separados por un espacio "<<endl;
	cin>>a>>b;
	cout<<" EL producto de los dos numeros es  "<<a*b<<endl;
	getch();

}
void dividirdos(){
	system("cls");
	int a,b;
	cout<<endl<<" Ingrese 2 numeros separados por un espacio "<<endl;
	cin>>a>>b;
	if (b!=0)
	{
		cout<<" La division de los dos numeros es  "<<(float)a/b<<endl;
	}else {
		cout<<" Division sobre cero"<<endl;
	}
	
	getch();

}

void opcin(){
	system("cls");
	cout<<"Opcion Invalida";
	Beep(500,100);
	Sleep(100);
	system("cls");
}
char pr_menu(){
	cout<<" 1.- SUMAR"<<endl;
	cout<<" 2.- RESTAR"<<endl;
	cout<<" 3.- MULTIPLICACION"<<endl;
	cout<<" 4.- Division"<<endl;
	cout<<" 5.- Salir"<<endl;
	cout<<" Opcion seleccionada: ";
	return getche();
}
int main(){
	char opc;
	do
	{
		opc = pr_menu();
		Sleep(200);
		switch (opc)
		{
		case '1':
			sumardos();
			break;
		case '2':
			restardos();
			break;
		case '3':
			multiplicardos();
			break;
		case '4':
			dividirdos();
			break;
		case '5':

			break;

		default:
			opcin();
			break;
		}
		system("cls");
	}while (opc!='5');
}