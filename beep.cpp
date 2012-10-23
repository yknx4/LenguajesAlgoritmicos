#include <windows.h>
#include <iostream>
#include <string>
#define BASE 330
using namespace std;

int main(){
	string key[12]={"A","A#","B","C","C#","D","D#","E","F","F#","G","G#"};
	float frec[12]={1,1.06,1.123,1.19,1.26,1.335,1.414,1.5,1.59,1.682,1.782,1.888};
	int i;
	for(i=0;i<12;i++){
		cout<<"La nota es "<<key[i]<<"\n";
		Beep(frec[i]*BASE,1000);
	}
}