#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define N 2  /* limited only to 2x2 matrix, needs generalization*/

//   read matrix files from CLI arguments

int main(int argc, char * argv[])

{
	int i,j,k;
	int rows1,cols1,rows2,cols2;
	int sum=0;	

	FILE *fp1, *fp2, *matrixoutput;

	fp1 = fopen(argv[1],"r");
	fp2 = fopen(argv[2],"r");


// allocate for matrix1

int** matrix1 = malloc(2*sizeof(int*));
for (i=0; i < 2; i++)
matrix1[i]=malloc(2*sizeof(int));
	fp1 = fopen(argv[1],"r");

	 for(i = 0; i < 2; i++)
  {
      for(j = 0; j < 2; j++) 
      {
       if (!fscanf(fp1, "%d", &matrix1[i][j])) 
           break;
      // mat[i][j] -= '0'; 
       printf("%d\n",matrix1[i][j]); 
      }

  }

// allocate for matrix2

int** matrix2 = malloc(2*sizeof(int*));
for (i=0; i < 2; i++)
matrix2[i]=malloc(2*sizeof(int));
	fp1 = fopen(argv[1],"r");

	 for(i = 0; i < 2; i++)
  {
      for(j = 0; j < 2; j++) 
      {
       if (!fscanf(fp2, "%d", &matrix2[i][j])) 
           break;
      // mat[i][j] -= '0'; 
       printf("%d\n",matrix2[i][j]); 
      }

  }


// multiplication of two matrices

int output[N][N]; 

    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
        { 
            output[i][j] = 0; 
            for (k = 0; k < N; k++) 
                output[i][j] += matrix1[i][k]*matrix2[k][j]; 
        } 
    } 

    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
           printf("%d ", output[i][j]); 
        printf("\n"); 
    } 
  
    return 0; 
}