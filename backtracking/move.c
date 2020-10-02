#include "ma.h"

int X[8] = { -2,-2,-1,-1, 1, 1, 2, 2};
int Y[8] = { -1, 1,-2, 2,-2, 2,-1, 1};
int dem = 0;
int n;
int A[MAX][MAX];
// Ham di chuyen quan ma
void move(int x, int y){
   int i;
   dem ++;
   A[x][y] = dem;
   for (i = 0; i < 8; i++){
      if (dem == n*n){
         printf("\nCac buoc di chuyen la: \n");
         Xuat(A, n);
         exit(0);
      }
      int u = x + X[i];
      int v = y + Y[i];

      // Kiem tra hop le de di chuyen
      if (u >= 0 && u < n && v >= 0 && v < n && A[u][v] == 0)
            move(u, v);
   }
   dem --;
   A[x][y] = 0;

}