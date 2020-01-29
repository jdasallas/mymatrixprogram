#include <stdio.h>
#include <stdlib.h>

//   read matrix files from CLI arguments

int main(int argc, char * argv[])

{
int i,j,k;
int rows1,cols1,rows2,cols2;
int sum=0;	
	FILE *f1, *f2;

	f1 = fopen("matrix1.txt","r");
	f2 = fopen("mtarix2.txt","r");

// count  rows and columns in each matrix
fscanf(f1,"%i",&rows1);
fscanf(f1,"%i",&cols1);
fscanf(f2,"%i",&rows2);
fscanf(f2,"%i",&cols2);

printf("\n\nRows1 = %d",rows1);
printf("\nCols1 = %d",cols1);
printf("\n\nRows2 = %d",rows2);
printf("\nCols2 = %d",cols2);


// close the input files
    fclose(f1);
    fclose(f2);
}
