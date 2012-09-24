#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
main()
{
	int x,b,i;
	string resp;
	char n;
	do{
	cout<<"1.- Tabla del Uno \n";
	cout<<"2.- Tabla del Dos \n";
	cout<<"3.- Tabla del Tres \n";
	cout<<"4.- Tabla del Cuatro \n";
	cout<<"5.- Tabla del Cinco \n";
	cout<<"6.- Tabla del Seis \n";
	cout<<"7.- Tabla del Siete \n";
	cout<<"8.- Tabla del Ocho \n";
	cout<<"9.- Tabla del Nueve \n";
	cout<<"10.- Tabla del Diez \n";
	cout<<"Seleccione la opcion que quiera ver: \n";
	cin>>n;
	system("cls");
	switch (n){
		case '1':
			for (x=1;x<=10;x++)
			{
				b= x*1;
				cout<<n<<"x"<<b<<"="<<b<<"\n";
			}
			cout <<"Desea seleccionar una opcion nueva: \n";
			cin>>resp;
			break;
		case '2':
			for (x=1;x<=10;x++)
			{
				b= x*2;
				cout<<x<<"x"<<b<<"="<<b<<"\n";
			}
	       	cout <<"Desea seleccionar una opcion nueva: \n";
			cin>>resp;
			break;
		case '3':
			for (x=1;x<=10;x++)
			{
				b= x*3;
				cout<<x<<"x"<<b<<"="<<b<<"\n";
			}
			cout <<"Desea seleccionar una opcion nueva: \n";
			cin>>resp;
			break;
		case '4':
			for (x=1;x<=10;x++)
			{
				b= x*4;
				cout<<x<<"x"<<b<<"="<<b<<"\n";
			}
			cout <<"Desea seleccionar una opcion nueva: \n";
			cin>>resp;
			break;	
		case '5':
			for (x=1;x<=10;x++)
			{
				b= x*5;
				cout<<x<<"x"<<b<<"="<<b<<"\n";
			}
			cout <<"Desea seleccionar una opcion nueva: \n";
			cin>>resp;
			break;
		case '6':
			for (x=1;x<=10;x++)
			{
				b= x*6;
				cout<<x<<"x"<<b<<"="<<b<<"\n";
			}
			cout <<"Desea seleccionar una opcion nueva: \n";
			cin>>resp;
			break;
		case '7':
			for (x=1;x<=10;x++)
			{
				b= x*7;
				cout<<x<<"x"<<b<<"="<<b<<"\n";
			}
			cout <<"Desea seleccionar una opcion nueva: \n";
			cin>>resp;
			break;
		case '8':
			for (x=1;x<=10;x++)
			{
				b= x*8;
				cout<<x<<"x"<<b<<"="<<b<<"\n";
			}
			cout <<"Desea seleccionar una opcion nueva: \n";
			cin>>resp;
			break;
		case '9':
			for (x=1;x<=10;x++)
			{
				b= x*9;
				cout<<x<<"x"<<b<<"="<<b<<"\n";
			}
			cout <<"Desea seleccionar una opcion nueva: \n";
			cin>>resp;
			break;	
		case '10':
			for (x=1;x<=10;x++)
			{
				b= x*10;
				cout<<x<<"x"<<b<<"="<<b<<"\n";
			}
			cout <<"Desea seleccionar una opcion nueva: \n";
			cin>>resp;
			break;
		default:
			cout<<"OPCION NO VALIDA \n";
			
		 }
		system("cls");
		}while (resp!="no");
	
}
