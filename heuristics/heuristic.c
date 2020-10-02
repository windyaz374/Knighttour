#include "hrt.h"

int Access[MAX][MAX], Choice[MAX][MAX][8];
int X[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
int Y[8] = {2, 1, -1, -2, -2, -1, 1, 2};


void Heuristic (int move)
{
    int min =  Access[row + X[Choice[row][col][0]]][col + Y[Choice[row][col][0]]];
    int r   =  row + X[Choice[row][col][0]],
        c   =  col + Y[Choice[row][col][0]];
    int i;
 
    for(i = 1; i < Access[row][col]; i++)
        {  
        if( min >= Access[row + X[Choice[row][col][i]]][col + Y[Choice[row][col][i]]])
        {
            min = Access[row + X[Choice[row][col][i]]][col + Y[Choice[row][col][i]]];
            r = row + X[Choice[row][col][i]];
            c = col + Y[Choice[row][col][i]];
        }
    }    
        Board[r][c] = move;
        row = r;
        col = c;
 
}
