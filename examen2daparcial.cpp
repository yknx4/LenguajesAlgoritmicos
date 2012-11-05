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
void imprimirtabla(){
	system("cls");
	int a;
	cout<<endl<<" Ingrese que tabla desea "<<endl;
	cin>>a;
	for (int i=0;i<11;i++)
	{
		cout<<endl<<a<<" x "<<i<< " es "<< a*i << endl;
	}
	getch();
}
void imprimirmayor3(){
	/*system("cls");
	int a,b,c,m;
	int ta,tb,tc;
	cout<<endl<<" Ingrese 3 numeros separados por un espacio "<<endl;
	int num[3]={a,b,c};
	for (int i=0;i<3;i++)
	{
		ta=num[1];
	}


	
	cout<<" La suma de los dos numeros es  "<<a+b<<endl;
	getch();*/
}
void solucec(){
	system("cls");
	int a;
	cout<<endl<<" Ingrese el valor de x en x^2-3x+5 "<<endl;
	cin>>a;
	cout<<" El valor de la funcion es  "<<((a*a)-(3*a)+5)<<endl;
	getch();
}
void cadinv(){
	/*char cad[];
	int i=0;
	cout<<endl<<" Ingrese la cadena "<<endl;
	do {
		cad[i]=getche();
		i++;
	}while (cad[i-1]!=13);

	for (int j=0;j<i+1;j++)
	{
		cout<<cad[j];
	}*/
			
}
void opcin(){
	system("cls");
	cout<<"Opcion Invalida";
	Beep(500,100);
	Sleep(100);
	system("cls");
}

int main(){
	char opc;
	do
	{
		cout<<" 1.- Suma de 2 numeros desde el teclado"<<endl;
		cout<<" 2.- Imprimir tabla de multiplicar"<<endl;
		cout<<" 3.- Dados 3 numeros proporcionados desde el teclado imprimirlos en pantalla de menor a mayor"<<endl;
		cout<<" 4.- Dada la ecuacion x^2-3x+5 calcular la solucion para cualquier valor proporcionado desde el teclado"<<endl;
		cout<<" 5.- Leer una cadena de caracteres, guardarlo en un vector e imprimir la cadena invertida"<<endl;
		cout<<" 6.- Salir"<<endl;
		cout<<" Opcion seleccionada: ";
		opc = getche();
		Sleep(200);
		switch (opc)
		{
		case '1':
			sumardos();
			break;
		case '2':
			imprimirtabla();
			break;
		case '3':
			imprimirmayor3();
			break;
		case '4':
			solucec();
			break;
		case '5':
			cadinv();
			break;
		case '6':

			break;
		default:
			opcin();
			break;
		}
		system("cls");
	}while (opc!='6');
	
	
}