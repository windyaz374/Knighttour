#include "hrt.h"
int Board[MAX][MAX];
int n;
int row, col;

int main(){
	   int count = 1, i, j;
   	printf("Nhap kich thuoc cua ban co n = "); scanf("%d", &n);
   	printf("\nNhap vi tri ban dau (x, y): "); scanf("%d%d",&row, &col);
   	Board[row][col] =  count;
   	while (count != n*n){
   		count ++;
   		Possible();
   		Heuristic(count);
   	}
      for (i = 0; i < n; i++){
         for (j = 0; j < n; j++){
            if (Board[i][j] == 0){
               printf("\nKhong ton tai duong di cua quan ma\n");
               exit(0);
            }
         }
      }
      printf("\nDuong di cua quan ma\n");
   	Print();
   	return(0);

}	