#include <stdio.h>

//   read matrix files from CLI arguments

int main(int argc, char * argv[])

{
int i,j,k;
int rows1,cols1,rows2,cols2;
int sum=0;	
	FILE *fp1, *fp2;

	fp1 = fopen(argv[1],"r");
	fp2 = fopen(argv[2],"r");

// count  rows and columns in each matrix

fscanf(fp1,"%i",&rows1);
fscanf(fp1,"%i",&cols1);
fscanf(fp2,"%i",&rows2);
fscanf(fp2,"%i",&cols2);

printf("\n\nRows1 = %d",rows1);
printf("\nCols1 = %d",cols1);
printf("\n\nRows2 = %d",rows2);
printf("\nCols2 = %d",cols2);


// close the input files
    fclose(fp1);
    fclose(fp2);
}
