#include <iostream>
#include <math.h>

using namespace std;

int main()
{	
	int n_p;
	unsigned long i;
	double y;
	y=0;
	cin >> n_p;
	//n_p=997;
	//cout<<n_p%2;
	if(n_p!=2){
	
	if (n_p%2==0){
//		cout<<"no es primo";
		return 0;
	}
	else{
		for (i=3;i<sqrt(n_p);i=i+2){ 
			y=n_p%i;
			if (y==0){
//				cout<<"no es primo, y es divisible sobre "<<i<<"\n";
				return 0;
			}
		}
	}
}
	return 1;
}

