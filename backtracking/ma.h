#ifndef MA_H_
#define MA_H_

#include <stdio.h>
#include <stdlib.h>
#define MAX 100

extern int A[MAX][MAX];
extern int X[8];
extern int Y[8];
extern int dem;
extern int n;

void move(int x, int y);
void Xuat(int A[][MAX], int n);

#endif