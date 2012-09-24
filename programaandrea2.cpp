//ORDENACION BURBUJA
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
main()
{
	int i,j,numero,n,r;
	int v[n];
	cout<<"¿Que tan grande sera tu vector?: \n";
	cin>>n;
	i=0;
	while (i<n)
	{
          cout<<"Dame un numero: \n";
	      cin>>numero;
          v[i]=numero;
          i=i+1;
    }

    for (i=0;i<n;i++)
    {
     cout<<v[i];
     cout << "\n";
    } 
//Ordenacion Burbuja
   for (i=1; i<n; i++)
   {
     for (j=0; j<n; j++)
      { 
        if (v[j]>v[j+1])
         {
           r=v[j];
           v[j]=v[j+1];
           v[j+1]=r;
          }
       }
    }
    for (i=0;i<n;i++)
    {
     cout<<v[i];
     cout << "\n";
     }
   system("pause");
          
}
