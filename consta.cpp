#include <iostream>
using namespace std;

int a,b,c,d,e,f;
const int g=1;
const int h=2;
const int i=3;
const int j=4;
const int k=5;
const int l=6;


int main(){
	a=1;
b=a+1;
c=b+2;
d=c+3;
e=d+4;
f=e+5;

	cout << "Tamaño de variable a es "<<sizeof(a)<<" bytes y el valor es "<<a<<"\n";
	cout << "Tamaño de variable b es "<<sizeof(b)<<" bytes y el valor es "<<b<<"\n";
	cout << "Tamaño de variable c es "<<sizeof(c)<<" bytes y el valor es "<<c<<"\n";
	cout << "Tamaño de variable d es "<<sizeof(d)<<" bytes y el valor es "<<d<<"\n";
	cout << "Tamaño de variable e es "<<sizeof(e)<<" bytes y el valor es "<<e<<"\n";
	cout << "Tamaño de variable f es "<<sizeof(f)<<" bytes y el valor es "<<f<<"\n";
	cout << "Tamaño de constante g es "<<sizeof(g)<<" bytes y el valor es "<<g<<"\n";
	cout << "Tamaño de constante h es "<<sizeof(h)<<" bytes y el valor es "<<h<<"\n";
	cout << "Tamaño de constante i es "<<sizeof(i)<<" bytes y el valor es "<<i<<"\n";
	cout << "Tamaño de constante j es "<<sizeof(j)<<" bytes y el valor es "<<j<<"\n";
	cout << "Tamaño de constante k es "<<sizeof(k)<<" bytes y el valor es "<<k<<"\n";
	cout << "Tamaño de constante l es "<<sizeof(l)<<" bytes y el valor es "<<l<<"\n";
	
}


