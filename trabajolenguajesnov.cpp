#include <iostream>
#include <windows.h>
#include <math.h>
#include <conio.h>
#include <string>
#define PI 3.1416
#define e 2.7183
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


	5.       Realizar un procedimiento que realice la conversión de coordenadas polares(r,angulo) a coordenadas cartesianas (x,y) X=r x cos(angulo) Y=r x sen(angulo)



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

long double fact1001kk(int a){
	if (a>=100 && a<=1000000)
	{
		return sqrt(2*PI*a)*pow((a/e),a);
	} 
	else
	{
		return 0;
	}
	
}

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
void cpoltoccar(float a, int b){
	int x,y;
	x=floor(a*cosn(b)+0.5);
	y=floor(a*seno(b)+0.5);
	cout << "("<<x<<","<<y<<")";
}

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

void menu1(){
	int a,b,c;
	system("cls");
	cout<<endl<<"Ingrese 3 numeros separados por un espacio "<<endl;
	cin>>a>>b>>c;
	cout<<endl<<"La media es "<<media3num(a,b,c)<<endl;
	getch();
	system("cls");
}
void menu2(){
	int a;
	system("cls");
	cout<<endl<<"Ingrese el numero para el factorial (Entre 100 y 1000000) "<<endl;
	cin>>a;
	cout<<endl<<"El factorial es "<<fact1001kk(a)<<endl;
	cout<<endl<<"[Calculo aproximado por el metodo de Stirling]"<<endl;
	cout<<endl<<"[Debido al tamaño de Long Double solo se puede representar maximo el factorial de 170, pero con lo que hemos visto en clase, no podemos aplicar otros metodos, como aritmetica BCD]"<<endl;
	getch();
	system("cls");
}
void menu3(){
	int a,b;
	system("cls");
	cout<<endl<<"Ingrese 2 numeros separados por un espacio "<<endl;
	cin>>a>>b;
	cout<<endl<<"El mayor es "<<mayorde2(a,b)<<endl;
	getch();
	system("cls");
}
void menu4(){
	int a,b;
	system("cls");
	cout<<endl<<"Ingrese un numero y la potencia a la que desea elevarse separados por un espacio "<<endl;
	cin>>a>>b;
	cout<<endl<<"El resultado es "<<potencia(a,b)<<endl;
	getch();
	system("cls");
}
void menu5(){
	double a;
	int b;
	system("cls");
	cout<<endl<<"Ingrese la coordenada polar con los parametros separador por un espacio [15.25 65] "<<endl;
	cin>>a>>b;
	cout<<endl<<"La coordenada cartesiana equivalente es ";
	cpoltoccar(a,b);
	cout<<endl;
	getch();
	system("cls");
}
void menu6(){
	char a;
	system("cls");
	cout<<endl<<"Ingrese 1 caracter "<<endl;
	a=getche();
	if (car19(a))
	{
		cout<<endl<<"El caracter esta entre 0 y 9"<<endl;
	} 
	else
	{
		cout<<endl<<"El caracter no esta entre 0 y 9"<<endl;
	}
	
	
	
	getch();
	system("cls");
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
		menu1();
			break;
		case '2':
			menu2();
			break;
		case '3':
			menu3();
			break;
		case '4':
			menu4();
			break;
		case '5':
			menu5();
			break;
		case '6':
			menu6();
			break;
		case '7':
			break;
		default:
			opcin();
			break;
		}
		system("cls");
	}while (opc!='7');
}