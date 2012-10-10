#include <windows.h>
#include <iostream>
#include <math.h>
#include <string>
#include <conio.h>
using namespace std;
void centena(int a=0,int b=0,int c=0){
		string unidad[10]={"","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"};
		string decena[10]={"","dieci","veinti","treintai","cuarentai","cincuentai","sesentai","setentai","ochentai","noventai"};
		string centena[10]={"","ciento","doscientos","trescientos","cuatrocientos","quinientos","seiscientos","setecientos","ochocientos","novecientos"};
		string especiales[8]={"","once","doce","trece","catorce","quince","diez","cien",};
		
		if((b==0)&&(a==1)&&(c==0)){
			cout<<especiales[7];
		}else{
			cout<<centena[a];
		}
		if((c==0)&&(b==1)){
			cout<<especiales[6];
		}else if((b!=1)||(c>5)){
			cout<<decena[b];
		}
		if((b==1)&&(c<=5)){
			cout<<especiales[c];
		}else{
			cout<<unidad[c];
		}
		
}
int main(){
	int num[9];
	int i,i2,p,af,bf;
	int count=0;
	for (i==0;i<9;i++){
		num[i]=getche();
		if (num[i] == (13)){
			for(i2=i;i2<10;i2++){
				num[i2]=0;
			}
			break;
		}
	}
	cout<<"\n";
	for(i=0;i<9;i++){
		if (num[8-i]==0){
		count++;}
		else{
			break;
		}
	}
	cout<<count<<"\n";
if((count==2)&&((num[2-count]-48)==1)){
	cout<<"unmillon";
}else if (count<=2){
	if(0-count<0){
		af=0;
	}else{
		af=num[0-count]-48;
	}
	if(1-count<0){
		bf=0;
	}else{
		bf=num[1-count]-48;
	}
	centena(af,bf,num[2-count]-48);
	cout<<"millones";
}

if((count==5)&&((num[5-count]-48)==1)){
	cout<<"mil";
}else if (count<=5){	
	if(3-count<0){
		af=0;
	}else{
		af=num[3-count]-48;
	}
	if(4-count<0){
		bf=0;
	}else{
		bf=num[4-count]-48;
	}
	centena(af,bf,num[5-count]-48);
	if((((num[3-count]-48)!=0)&&((num[4-count]-48)!=0)&&((num[5-count]-48)!=0))||(count>2)||count==0){
	cout<<"mil";
	}
}
if(count==7){
	centena(0,num[7-count]-48,num[8-count]-48);
}else if(count==8){
centena(0,0,num[8-count]-48);
}else{
centena(num[6-count]-48,num[7-count]-48,num[8-count]-48);}
}
