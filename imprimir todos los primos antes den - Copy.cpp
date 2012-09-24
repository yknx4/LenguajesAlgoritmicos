#include <iostream>
#include <conio.h>
#include <math.h>
//programa en c++ para probar
//Hola Mundo


using namespace std;

//#include "prime.inc"
bool prime(int n_p)
{	
	unsigned long i;
	double y;
	y=0;
//	cin >> n_p;
	//n_p=997;
	//cout<<n_p%2;
	if ((n_p%2)==0){
//		cout<<"no es primo";
		return 0;
	}
	else{
		for (i=3;i<(ceil(sqrt(n_p))+1);i=i+2){ //aqui esta el error
			y=n_p%i;
//			cout<<i;
//			cout<<"\n";
			if (y==0){
//				cout<<"no es primo, y es divisible sobre "<<i<<"\n";
				return 0;
			}
			if (i==round(ceil(sqrt(n_p)))){
//				cout<<n_p;
				return 1;
			}
		}
	}
	return 1;
}

int main()
{
    unsigned long x,n;
    double y;
    x=0;
    y=0;
    //n=1000000;
	cout <<"Ingrese el numero maximo\n\n";
	cout << "Numero Maximo: ";
	cin >> n;
	cout << "\n1\n2\n";
	for (x=3;x<=n;x++) {
//		cout<<prime(x);
		if (prime(x)==1){
			cout<<x;
			cout<<"\n";
		}
		}
	}
