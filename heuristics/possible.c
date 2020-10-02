#include "hrt.h"
int n;

void Possible()
{
    int next_pos;
    int r, c, i;
    for(r = 0;r <= n-1; r++)
    {
 
        for(c = 0;c <= n-1;c++)
        {
            next_pos = 0;
           
            for(i = 0; i <= 7;i++)
            {
                if(Check(r + X[i], c + Y[i]))
                {                   
                    Choice[r][c][next_pos] = i;
                    next_pos++;
                }
            }
            Access[r][c] = next_pos;    
        }
    }
 
     
}