#include <windows.h>
#include <iostream>
#include <math.h>
#include <string>
#include <conio.h>
using namespace std;
void centena(int a=0,int b=0,int c=0){
		string str,str2,str3;
		switch (c) {
  		case 1:
				if(b!=1){
				str="uno";			
				}else{
					str="once";
				}		
		    	break;
		case 2:
				if(b!=1){
				str="dos";			
				}else{
					str="doce";
				}
		    	break;
		case 3:
				if(b!=1){
				str="tres";			
				}else{
					str="trece";
				}
		    	break;
		case 4:
				if(b!=1){
				str="cuatro";			
				}else{
					str="catorce";
				}
		    	break;
		case 5:
				if(b!=1){
				str="cinco";			
				}else{
					str="quince";
				}			
		    	break;
		case 6:
				str="seis";			
		    	break;
		case 7:
				str="siete";			
		    	break;
		case 8:
				str="ocho";			
		    	break;
		case 9:
				str="nueve";			
		    	break;
 		}
 		switch (b) {
  		case 1:
				if(c<=5){
					str2="";
				}	else{
				str2="dieci";			}
		    	break;
		case 2:
				str2="veinti";			
		    	break;
		case 3:
				str2="treintai";			
		    	break;
		case 4:
				str2="cuarentai";			
		    	break;
		case 5:
				str2="cincuentai";			
		    	break;
		case 6:
				str2="sesentai";			
		    	break;
		case 7:
				str2="setentai";			
		    	break;
		case 8:
				str2="ochentai";			
		    	break;
		case 9:
				str2="noventai";			
		    	break;
	}	switch (a) {
  		case 1:
				if(b!=0){
				str3="ciento";			
				}else{
					str3="cien";
				}
		    	break;
		case 2:
				str3="doscientos";			
		    	break;
		case 3:
				str3="trescientos";			
		    	break;
		case 4:
				str3="cuatrocientos";			
		    	break;
		case 5:
				str3="quinientos";			
		    	break;
		case 6:
				str3="seiscientos";			
		    	break;
		case 7:
				str3="setecientos";			
		    	break;
		case 8:
				str3="ochocientos";			
		    	break;
		case 9:
				str3="novecientos";			
		    	break;
	}
		cout<<str3<<str2<<str;
}
int main(){
	int num[9];
	int i,i2,p;
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
if((count==2)&&((num[2-count]-48)==1)){
	cout<<"unmillon";
}else if (count<=2){
	centena(num[0-count]-48,num[1-count]-48,num[2-count]-48);
	cout<<"millones";
}
if((count==5)&&((num[5-count]-48)==1)){
	cout<<"mil";
}else if (count<=5){
	centena(num[3-count]-48,num[4-count]-48,num[5-count]-48);
	cout<<"mil";
}
centena(num[6-count]-48,num[7-count]-48,num[8-count]-48);
}
