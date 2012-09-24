#include <iostream>
#include <conio.h>
using namespace std;
main()
{
	int n,a,b,c;
	a=0;
	b=1;
	cout<<"¿Hasta que numero vamos a calcular?: \n";
	cin>>n;
	cout<< a;
	cout<< b;
	do{
		c=a+b;
		cout<<c;
		a=b;
		b=c;
		
		}while (c<n);
}
