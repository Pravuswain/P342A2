#include <stdio.h>
#include <stdlib.h>
 
double dot(double *, double *, size_t);
void sum(double *, double *, double*temp);
int main()
{
    double a[3] = {2, 3, -5};
    double b[3] = {4, -2, -1};
    double r = dot(a, b, sizeof(a) / sizeof(a[0]));
    double cp[3];
    double temp[3];
   sum(a,b,temp);
    for (int i=0;i<3;i++){
        cp[i]=temp[i];
    }
    printf("A.B= %lf\n",r );
    printf("A+B = %lf\n",r);
   
    for(int i = 0; i <3; i++)
      printf("%lf ", cp[i]);
    return 0;
}
 
double dot(double *a, double *b, size_t n)
{
    double dot = 0;
    size_t i;
 
    for (i = 0; i < n; i++) {
            dot += a[i] * b[i];
    }
 
    return dot;
}
void sum(double*a, double* b, double temp[])
{
    temp[0]=a[0]+b[0];
    temp[1]=a[1]+b[1];
    temp[2]=a[2]+b[2];
}



//A.B = 7.000000
//A+B = 6.000000 1.000000 -6.000000 

