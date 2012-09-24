#include <iostream>
#include <math.h>

using namespace std;

int main()
{	
	int n_max,i;
	double y;
	y=0;
	//cin >> n_max;
	n_max=11;
	for (i=2;i<=n_max;i++){
		y=n_max%i;
		cout<<y;
		if (y==0){
			return 0;
		}
		if (i==n_max-1){
			cout<<n_max;
			return 1;
		}
	}
}

