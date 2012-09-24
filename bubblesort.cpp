#include <iostream>
#define ARRAY_SIZE 20

using namespace std;

int compare(int a, int b){
	if (a>b){
		return a;
	}
	else{
		return b;
	}
}



int main(){
	int number[ARRAY_SIZE] = {32,544,34,12,65,67,98,1,23,3,5,7,4,87,89,33,24,111,65,9};
	int i,j,tmp_cnt,p,tmp1,tmp2;
	tmp_cnt = 0;
	bool sw;
	for (j=0;j<ARRAY_SIZE;j++){
		sw=0;
		cout<<"\n";
		for(p=0;p<ARRAY_SIZE;p++){
			cout << number[p] << " ";
		}
		for(tmp_cnt=0;tmp_cnt<ARRAY_SIZE-1;tmp_cnt++){
			if (number[tmp_cnt]>number[tmp_cnt+1]){

				tmp1=number[tmp_cnt];
				number[tmp_cnt]=number[tmp_cnt+1];
				number[tmp_cnt+1]=tmp1;
				sw=1;
				cout<<"\n";
				for(p=0;p<ARRAY_SIZE;p++){
					cout << number[p] << " ";
				}
/*				cout<<"\n";
				cout << number[tmp_cnt] << " es n\n";
				cout << number[tmp_cnt+1] << " es n+1\n";*/
			}
	};
	cout<<"\n-----------------------------------------------------\n";
	if (sw==false){
		break;
	}
	
	}	
	
	//debug
	cout<<"\n\n\n\n array arreglado\n";
	for(p=0;p<ARRAY_SIZE;p++){
		cout << number[p] << " ";
	}

}
/* Code for printing whole Array
int p

	for(p=0;p<ARRAY_SIZE;p++){
			cout << number[p] << " ";
		}
	*/
