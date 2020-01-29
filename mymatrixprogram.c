#include <stdio.h>
#include <stdlib.h>

//   read matrix files from CLI arguments

int main(int argc, char * argv[])
{
	FILE *fptr1, *fptr2;

	fptr1 = fopen(argv[1],"r");
	fptr2 = fopen(argv[2],"r");

//	fclose(fptr1);
//	fclose(fptr2);

}
