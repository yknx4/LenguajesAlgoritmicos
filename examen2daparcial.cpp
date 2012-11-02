#include <iostream>
#include <windows.h>
#include <math.h>
#include <conio.h>
#include <string>
#define PI 3.1416
#define e 1.02316
using namespace std;

float seno(float ang){
	return sin(ang*PI/180);
}
float cosn(float ang){
	return cos(ang*PI/180);
}
float tang(float ang){
	return tan(ang*PI/180);
}
void opcin(){
	system("cls");
	cout<<"Opcion Invalida";
	Beep(500,100);
	Sleep(100);
	system("cls");
}

char pr_menu(){
	/*
	1.       Diseñar una función que calcule la media de tres números leídos del teclado 

	2.       Diseñar la función factorial que calcule el factorial de un número entero entre el rango de 100 a 1,000,000

	3.       Diseñar una función que encuentre el mayor de dos números enteros

	4.       Diseñar una función que calcule el valor de la variable X elevado al potencia n

	5.       Realizar un procedimiento que realice la conversión de coordenadas polares(r,angulo) a coordenadas cartesianas (x,y) X=r x cos(angulo) Y=r x sen(angulo)

	6.       Escribir una función booleana que determine si un carácter leído desde el teclado es un de los dígitos 0-9


*/
	cout<<" 1.- Calcular la media de 3 numeros"<<endl;
	cout<<" 2.- Calcular factorial de un numero entre 100 y 1000000"<<endl;
	cout<<" 3.- Dar el mayor de 2 numeros enteros"<<endl;
	cout<<" 4.- X elevado a la n"<<endl;
	cout<<" 5.- Conversion de coordenadas polares a cartesianas"<<endl;
	cout<<" 6.- Determinar si un digito esta entre 0 y 9"<<endl;
	cout<<" 7.- Salir"<<endl;
	cout<<" Opcion seleccionada: ";
	return getche();
}

int media3num(int a, int b, int c){
	return (a+b+c)/3;
}

/*long int fact1001kk(int a){
	
}*/

int mayorde2 (int a, int b){
	if (a>b)
	{
		return a;
	} 
	else
	{
		return b;
	}
}
int potencia(int a, int n){
	long int res;
	res=a;
	for (int i=2;i<=n;i++)
	{
		res=res*a;
	}
	return res;
}
/*int cpoltoccar(int a, int b){

}*/

bool car19(char a){
	if (a>47 && a<58)
	{
		return 1;
	} 
	else
	{
		return 0;
	}
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
		//	cout << potencia(2,8);
			system("pause");
			break;
		case '2':
			break;
		case '3':
			break;
		case '4':
			break;
		case '5':
			break;
		case '6':
			break;
		case '7':
			break;
		default:
			opcin();
			break;
		}
		system("cls");
	}while (opc!='6');
}