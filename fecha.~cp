#include <windows.h>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;
int main(){
string dia[7]={"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
string mes[12]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
short int m_code[12]={0,3,3,6,1,4,6,2,5,0,3,5};
int dia_a,dia_s,mth,year,c,y,l;
l=0;
cout<< "Inserte dia, mes y año (separados por un espacio)";
cin>>dia_a>>mth>>year;
mth--;
if (((year>=1400)&&(year<1500))||((year>=1800)&&(year<1900))||((year>=2200)&&(year<2300))){
	c=2;
}else if (((year>=1500)&&(year<1600))||((year>=1900)&&(year<2000))||((year>=2300)&&(year<2400))){
	c=0;
}else if (((year>=1600)&&(year<1700))||((year>=2000)&&(year<2100))||((year>=2400)&&(year<2500))){
	c=5;
}else if (((year>=1700)&&(year<1800))||((year>=2100)&&(year<2200))||((year>=2500)&&(year<2600))){
	c=4;
}else{
	c=0;
}
if (year>=2000){
	l++;
	if ((year==2000)&&(mth<=2)){
		l--;
	}
}
y=year%100;
l+=y/4;
dia_s=(c+y+l+m_code[mth]+dia_a)%7;
cout <<"Es "<<dia[dia_s]<<" "<<dia_a<<" de "<<mes[mth]<<" de "<<year<<"\n";
}
