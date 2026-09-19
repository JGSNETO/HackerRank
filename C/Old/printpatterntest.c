#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()

{
    int n= 4;
    int m = 2*n -1;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(i == 0) printf("%d ", n);
            if(j < i || j == m)
            {
                printf("J: %d & i: %d\n ", j, i);
            }
            else 
                {

                    printf("J: %d & i: %d\n ", j, i);
                }
            
        }
    }

}