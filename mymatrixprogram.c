#include <stdio.h>
#include <stdlib.h>

//   read matrix files from CLI arguments

int main(int argc, char * argv[])

{
int i,j,k;
int rows1,cols1,rows2,cols2;
int sum=0;	
	FILE *f1, *f2;

	f1 = fopen(argv[1],"r");
	f2 = fopen(argv[2],"r");



// count  rows and columns in each matrix
fscanf(f1,"%i",&rows1);
fscanf(f1,"%i",&cols1);
fscanf(f2,"%i",&rows2);
fscanf(f2,"%i",&cols2);

printf("\n\nRows1 = %d",rows1);
printf("\nCols1 = %d",cols1);
printf("\n\nRows2 = %d",rows2);
printf("\nCols2 = %d",cols2);

 //allocate Matrcies

    int **mat1 = (int **)malloc(rows1 * sizeof(int*));
    for(i = 0; i < rows1; i++)
        mat1[i] = (int *)malloc(cols1 * sizeof(int));

    i=0;

    int **mat2 = (int **)malloc(rows2 * sizeof(int*));
    for(i = 0; i < rows2; i++)
        mat2[i] = (int *)malloc(cols2 * sizeof(int));

    i=0;

    int **mat3 = (int **)malloc(rows1 * sizeof(int*));
    for(i = 0; i < rows1; i++)
        mat3[i] = (int *)malloc(cols2 * sizeof(int));

    i=0;

    ////////////////////////////

  
    {
        for(i=0;i<rows1;i++)
        {
            for(j=0;j<cols1;j++)
                fscanf(f1,"%d%*[^\n]%*c",&mat1[i][j]);
        }
    }

    i=0;
    j=0;


    {
        for(i=0;i<rows2;i++)
        {
            for(j=0;j<cols2;j++)
                fscanf(f2,"%d%*[^\n]%*c",&mat2[i][j]);
        }
    }

    /////////////////////////
    i=0;
    j=0;
    printf("\n\n");
    //print matrix 1
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols1;j++)
            printf("%d\t",mat1[i][j]);

        printf("\n");
    }
    ////////////////////////////
    i=0;
    k=0;
    printf("\n\n");
    //print matrix 2
    for(i=0;i<rows2;i++)
    {
        for(j=0;j<cols2;j++)
            printf("%d\t",mat2[i][j]);

        printf("\n");
    }
    /////////////////////////
    i=0;
    j=0;
    //multiplication stetments
    for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols2;j++)
        {
            sum=0;
            for(k=0;k<rows2;k++)
                sum+=mat1[i][k]*mat2[k][j];
        }
        mat3[i][j]=sum;
    }

    i=0;
    j=0;
    k=0;

    //print multiplication result
    printf("\n\nResult = \n\n");

    for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols2;j++)
            printf("%d\t",mat3[i][j]);

        printf("\n");
    }

// close the input files
    fclose(f1);
    fclose(f2);
}


