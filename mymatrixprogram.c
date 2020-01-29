#include <stdio.h>
#include <stdlib.h>

//   read matrix files from CLI input

int main(int argc, char * argv[])
{
	FILE *fptr1, *fptr2;

	fptr1 = fopen(argv[1],"r");
	fptr2 = fopen(argv[2],"r");

	if( fptr1 == NULL || fptr2 == NULL )
	{
		perror("Error ");
		printf("Press any key to exit...\n");
		exit(0);
		exit(EXIT_FAILURE);
	}
	fclose(fptr1);
	fclose(fptr2);

}
