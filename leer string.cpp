#include <iostream>
#include <conio.h>
#include <windows.h>
#include <string>
char str[20];
int i;

using namespace std;
int main(){
	i=0;
	while (str[i]!=char(13)){
		str[i]=getche();
		i++;
	}
	system("cls");
	cout<<"\n\n";
	for(i=1;i<21;i++){
		cout<<str[1];
	}


	
}g
