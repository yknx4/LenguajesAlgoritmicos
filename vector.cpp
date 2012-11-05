#include <iostream>
#include <windows.h>
#include <math.h>
#include <conio.h>
#include <string>

using namespace std;

int main(){
	int a[5];
	for (int i=0;i<5;i++)
	{
		cout << "Ingrese el valor no "<<i+1<<endl;
		cin >> a[i];
//		cout<<endl<<"El valor de a en "<<i<<" es "<<a[i]<<endl<<endl;
	}

	for (int i=0;i<5;i++)
	{
		
		cout<<endl<<"El valor de a en "<<i<<" es "<<a[i]<<endl<<endl;
	}

}