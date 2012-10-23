#include <windows.h>
#include <iostream>
#include <string>
#include <conio.h>
#define BASE 330
using namespace std;

int main(){
	string key[12]={"A","A#","B","C","C#","D","D#","E","F","F#","G","G#"};
	float frec[12]={1,1.06,1.123,1.19,1.26,1.335,1.414,1.5,1.59,1.682,1.782,1.888};
	int i,oct,k;
	char opc;
	opc='a';
	while(opc!='1'){
		opc=getch();
		switch(opc){
			case 'a':
				oct=1;
				k=4;
				break;
			case 'w':
				oct=1;
				k=5;
				break;
			case 's':
				oct=1;
				k=6;
				break;
			case 'd':
				oct=1;
				k=7;
				break;
			case 'r':
				oct=1;
				k=8;
				break;
			case 'f':
				oct=1;
				k=9;
				break;
			case 't':
				oct=1;
				k=10;
				break;
			case 'g':
				oct=1;
				k=11;
				break;
			case 'h':
				oct=2;
				k=0;
				break;
			case 'u':
				oct=2;
				k=1;
				break;
			case 'j':
				oct=2;
				k=2;
				break;
			case 'i':
				oct=2;
				k=3;
				break;
			default:
				k=100;
				break;
		}
		if (k!=100){
		Beep(frec[k]*BASE*oct,100);
		}
	}
}