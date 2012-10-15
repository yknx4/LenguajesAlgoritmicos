#include <windows.h>
#include <iostream>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <time.h>
using namespace std;

int main(){
	char lala[]="Mariana es bien tsundere y harinosa";
	int i;
	for (i=0;i<strlen(lala);i++){
		Sleep(200);
		cout<<lala[i];
	}
}
