#include "hrt.h"

bool Check(int row, int col){
	if (row <= n-1 && row >= 0 && col <= n-1 && col >= 0 && Board[row][col] == 0)
		return true;
	else 
		return false;
}