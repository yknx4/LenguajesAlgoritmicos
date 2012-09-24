#include <iostream>
#include <math.h>

using namespace std;

main()
{
	int a,b,c;
		
	cout << "Inserte a\n";
	cin >> a;
	cout << "Inserte b\n";
	cin >> b;
	cout << "Inserte c\n";
	cin >>c;
	cout << b*a-pow(b,2)/4*c << "\n";
	cout << (a*b)/pow(3,2)<< "\n";
	cout << (((b+c)/2*a+10)*3*b)-6<< "\n\n";
	cout << pow(pow(a,b),c);
	//cout << "La suma es: " << a+b << "\n\n";
	//cout << a+b;
	//cout << "\n\n";	
	//cout << "Fin de la suma";
}

