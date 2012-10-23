#include <iostream>
#include <windows.h>
//#define ARRAY_SIZE 20

using namespace std;

int main(){
	int number[] = {3214,544,3484,544,1212,651,367,598,144,8293,37,56348,74,785,48,877,7898,363,2849,91191,465,859,123,4532,6134,3684,785,94882,234,54352,654,7463,53453,2352,65,35,7546,4567,234,7654,464346,35,76,547665,45634,546547,64,6,456,4564,546,352457,8754,345,76558,45346,456,875,43,5345};
	system("cls");
	int ARRAY_SIZE = sizeof(number)/4;
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
				//cout<<"\n";
				for(p=0;p<ARRAY_SIZE;p++){
					//cout << number[p] << " ";
				}
			}
			tmp_cnt++;
		}while (tmp_cnt<ARRAY_SIZE-1);
	//cout<<"\n-------------------------------------------------------\n";
	if (sw==false){
		break;
	}
	
	}

	for (i=0;i<ARRAY_SIZE;i++){
		cout<<number[i]<<"\n";
	}
}

