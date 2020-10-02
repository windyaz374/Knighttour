#include "ma.h"
int n;
int main(){
   int x, y;
   printf("Nhap kich thuoc cua ban co n = "); scanf("%d", &n);
   
   printf("\nNhap vi tri ban dau (x, y): "); scanf("%d%d",&x, &y);

   move(x, y);
   printf("Khong tim thay duoc duong di");
   return(0);
}