//Programa para calcular el area de un triangulo
#include <iostream>

using namespace std;

main()
{
	float h,b,i;
	for  (i=1;i<=3;i++){	
		cout << "Inserte altura\n";
		cin >> h;
		cout << "Inserte base\n";
		cin >>b;
		cout << "El area es: " << (h*b)/2 << "\n\n";
	}
	cout << "Fin del calculo";
}

