#include "hrt.h"

void Print()
{	
    int i,j;
    for(i = 0; i < n; i++)
   {
      for(j = 0; j < n; j++)
         printf("%d\t", Board[i][j]);
      printf("\n");
   }
}