#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main(){
	string answer;
	int i,a;
	while(answer!="no"){
	system("cls");
	cout<<"Que tabla quieres ver? \n";
	cout<<"1.- Tabla del 1 \n";
	cout<<"2.- Tabla del 2 \n";
	cout<<"3.- Tabla del 3 \n";
	cout<<"4.- Tabla del 4 \n";
	cout<<"5.- Tabla del 5 \n";
	cout<<"6.- Tabla del 6 \n";
	cout<<"7.- Tabla del 7 \n";
	cout<<"8.- Tabla del 8 \n";
	cout<<"9.- Tabla del 9 \n";
	cout<<"10.- Tabla del 10 \n";
	cin>>a;
	system("cls");
	if (a<11&a>0){
		for (i=0;i<11;i++){
			cout<<a<<"x"<<i<<"= "<<a*i<<"\n\n";
		}
	}
	cout<<"Ingrese \"no\" para salir, o cualquier otra cosa para continuar ";
	cin>>answer;
	}	
}
