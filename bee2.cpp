#include <windows.h>
#include <iostream>
using namespace std;

int main(){
	char key[12]={'A','A#','B','C','C#','D','D#','E','F','F#','G','G#'};
	float frec[12]={440,466.16,493.88,523.25,554.37,587.33,622.25,659.26,698.46,739.99,783.99,830.61};
	int i;
	for(i=0;i==12;i++){
		Beep(i,1000);
		cout<<"La nota es "<<key[i]<<"\n";
	}
}
