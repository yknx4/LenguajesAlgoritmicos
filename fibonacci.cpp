#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
int main(){
	unsigned long a,b,x,y,z;
	cout<<"Hasta que número de Fibonnaci quiere llegar? ";
	cin>>a;
	x=0;
	y=1;
	cout<<x<<"\n";
	cout<<y<<"\n";
	for(b=0;b<a;b++){
		cout<<x+y<<"\n";
		z=x;
		x=y;
/*		if (y>=100){
			break;
		}	*/
		y=y+z;
	}
	
	
}
