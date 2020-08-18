#include <stdio.h>
#include <stdlib.h>
 
double dot_product(double *, double *, size_t);
void cross_product(double *, double *, double*temp);
int main()
{
    double a[3] = {2, 3, -5};
    double b[3] = {4, -2, -1};
    double r = dot_product(a, b, sizeof(a) / sizeof(a[0]));
    double cp[3];
    double temp[3];
    cross_product(a,b,temp);
    for (int i=0;i<3;i++){
        cp[i]=temp[i];
    }
    printf("The dot product is %lf\n",r );
    printf("The cross product is ");
    for(int i = 0; i <3; i++)
      printf("%lf ", cp[i]);
    return 0;
}
 
double dot_product(double *a, double *b, size_t n)
{
    double dot = 0;
    size_t i;
 
    for (i = 0; i < n; i++) {
            dot += a[i] * b[i];
    }
 
    return dot;
}

void cross_product(double*a, double* b, double temp[])
{
    temp[0]=a[1]*b[2]-b[1]*a[2];
    temp[1]=a[2]*b[0]-a[0]*b[2];
    temp[2]=a[0]*b[1]-a[1]*b[0];
}


//The dot product is 7.000000

//The cross product is -13.000000 -18.00000 -16.00000 