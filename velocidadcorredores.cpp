#include <iostream>

using namespace std;

int main(){
	float min,seg,velo;
	do{	
		cout<<"Inserte minutos\n";
		cin>>min;
		cout<<"Inserte segundos\n";
		cin>>seg;
		if(min!=0&seg!=0){	
			velo= 1500/((min*60)+seg);
			cout<<"\nLa Velocidad es "<<velo<<"m/s\n\n";}
	}while(min!=0&seg!=0);
	}
