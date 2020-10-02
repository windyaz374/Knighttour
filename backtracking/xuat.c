#include "ma.h"

//  Ham xuat ket qua
void Xuat(int A[][MAX], int n)
{	
	int i,j;
   for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
         printf("%d\t", A[i][j]);
      printf("\n");
   }
}