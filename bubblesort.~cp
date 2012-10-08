#include <iostream>
#define ARRAY_SIZE 20

using namespace std;

int main(){
	int number[ARRAY_SIZE] = {32,544,34,12,65,67,98,1,23,3,5,7,4,87,89,33,24,111,65,9};
	int i,j,tmp_cnt,p,tmp1,tmp2;
	tmp_cnt = 0;
	bool sw;
	for (j=0;j<ARRAY_SIZE;j++){
		tmp_cnt = 0;
		sw=0;
		do{
			if (number[tmp_cnt]>number[tmp_cnt+1]){
				tmp1=number[tmp_cnt];
				number[tmp_cnt]=number[tmp_cnt+1];
				number[tmp_cnt+1]=tmp1;
				sw=1;
				cout<<"\n";
				for(p=0;p<ARRAY_SIZE;p++){
					cout << number[p] << " ";
				}
			}
			tmp_cnt++;
		}while (tmp_cnt<ARRAY_SIZE-1);
	cout<<"\n-------------------------------------------------------\n";
	if (sw==false){
		break;
	}
	
	}	
}

