#include <iostream>
#include <conio.h>
#include <math.h>
#include <windows.h>
using namespace std;

#include "prime.inc"

int main()
{
    unsigned long x,n;
    double y;
    x=0;
    y=0;
	cout <<"Ingrese el numero maximo\n\n";
	cout << "Numero Maximo: ";
	cin >> n;
	system("cls");
	for (x=1;x<=n;x++) {
		if (prime(x)==1){
			cout<<x;
			cout<<"\n";
		}
		}
	}
