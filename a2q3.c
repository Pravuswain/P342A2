#include <stdio.h>
#include <stdlib.h>

int main()
{
//define variables
    int sum = 0;
    int i,j;
    double value[3][3];
    double va[3][3];
    double A[3][1];
    double mul[3][1];
    double multiply[3][3];

//define A
    A[0][0]=2;
    A[1][0]=3 ;
    A[2][0]=-5 ;
 //open file in directory   
    FILE *open;
    FILE *opena;
    open = fopen("Mmatrix.txt","r");
    
    i=0;
    while (feof(open) == 0)
    {
        fscanf( open, "%lf %lf %lf", &value[i][0],&value[i][1],&value[i][2]);
        i++;
        
    }
    
   
    fclose(open);
    
    opena = fopen("Nmatrix.txt","r");
    j=0;

    
    while (feof(opena) ==0)
    {
        fscanf( opena, "%lf %lf %lf", &va[j][0],&va[j][1],&va[j][2]);
        j++;
        
    }

    fclose(opena);
    
    for (int c = 0; c < 3; c++) {
      for (int d = 0; d < 3; d++) {
        
           multiply[c][d]=0 ;
        for (int k = 0; k < 3; k++) {
 
        multiply[c][d] += value[c][k]*va[k][d];
        }
      }
    }
    
    for (int c = 0; c < 3; c++) {
      for (int d = 0; d <1; d++) {
        
           mul[c][d]=0 ;
        for (int k = 0; k < 3; k++) {
 
        mul[c][d] += value[c][k]*A[k][d];
        }
      }
    }
    
     printf(" A = \n");
    for(j = 0; j < 3; j++)
        printf("%10.0f \n", A[j][0]);
   
    printf(" M =\n");
    for(j = 0; j < i; j++)
        printf("%10.0f %10.3f %10.3f\n", value[j][0], value[j][1], value[j][2]);
        
    printf(" N = \n");
    for(j = 0; j < i; j++)
        printf("%10.0f %10.3f %10.3f\n", va[j][0], va[j][1], va[j][2]);
    
    printf(" M x N =\n");
    for(j = 0; j < i; j++)
        printf("%10.0f %10.3f %10.3f\n", multiply[j][0], multiply[j][1], multiply[j][2]);
        
    printf(" M X A = \n");
    for(j = 0; j < i; j++)
        printf("%10.0f \n", mul[j][0]);
    
    
    
    return 0;
}

//OUTPUT
// M =
//1 2 3
//4 5 6
//7 8 9


// N =
//1 1 2
//3 1 5
//6 1 8


// M x N =
// 25, 6, 36                                                                                                          
// 55, 15, 81                                                                                                           
// 85, 24, 126

// M x A =
// 6                                                                                                                                   
// 15                                                                                                                                    
// 28