#include <iostream>
#include <windows.h>
#include <math.h>
#include <conio.h>
#include <string>
using namespace std;
void dinxhor(int x){
	int a,b,c;
	system("cls");
	if (x<=40 && x>0)
	{
		cout<<x << " horas a sueldo normal"<<endl;
	} 
	else if(x>0)
	{

		cout<<"40 horas a sueldo normal"<<endl;
		b=(x-40)%10;
		c=(x-40)-b;
		cout<<c << " horas a sueldo doble"<<endl;
		cout<<b << " horas a sueldo triple"<<endl;
	}
	else
	{
		cout<<"No hay horas negativas"<<endl;
	}


}
int main(){
	    int a;
		system("cls");
		cout<<endl<<"ingrese el total de horas "<<endl;
		cin>>a;
		dinxhor(a);
		getch();
		system("cls");
}