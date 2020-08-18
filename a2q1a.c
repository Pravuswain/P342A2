#include <stdio.h>
#include <stdlib.h>

int main()
{
    float i, j, n=0;
    int N = 6;
    float obs = 0;
    for (i=0; i<N; i++)
    {
        for(j=0;j<N;j++)
        {
            obs += abs(i-j);
            n++;
            
        }
    };
    float dis=obs/n;
    
    printf(" avg distance : %f",dis);
    return 0;
}

// avg distance : 1.944444