#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m,n,o,p, i=0;
    int N = 6;
    float d =0;
    for (m=0; m<N; m++)
        for(o=0; o<N;o++)
    {
        for (n=0; n<N; n++)
            for(p=0; p<N;p++)
        {
            d+=abs(m-n)+abs(o-p);
            i++;
        
        }
    };
    float k=d/i;
    
    printf("The average distance  %f",k);
    return 0;
}

//OUTPUT
//The average distance : 3.888889
