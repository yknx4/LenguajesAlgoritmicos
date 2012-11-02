#include <iostream>
#include <windows.h>
#include <math.h>
#include <conio.h>
#include <string>
using namespace std;
void imprimirtabla(int a){
	if (a!=0)
	{
		for (int i=0;i<11;i++)
		{
			cout<<endl<<a<<" x "<<i<< " es "<< a*i << endl;
		}
		getch();
		//return 1;
	}
}
int main(){
	//int opc;
	int a;
	do
	{
		system("cls");
		
		cout<<endl<<" Ingrese que tabla desea "<<endl;
		cin>>a;
		imprimirtabla(a);
		system("cls");
	}while (a!=0);
}