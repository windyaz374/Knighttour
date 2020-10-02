#ifndef HRT_H_
#define HRT_H_

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX 100

extern int n;
extern int Board[MAX][MAX], Access[MAX][MAX], Choice[MAX][MAX][8];
extern int X[8], Y[8];
extern int row, col;

bool Check(int row, int col);
void Heuristic (int move);
void Possible();
void Print();
#endif