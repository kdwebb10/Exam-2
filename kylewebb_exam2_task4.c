// =====================================================================================
// 
//       Filename:  final_task3.c
//       Help Mr.BUGS
// =====================================================================================
#include <stdio.h>
#include <stdlib.h>
#define MAX 8
// Main Program
int main(int argc, char *argv[])
{
	// Pointer to file
	FILE *inFile;
	char name[MAX]; // MAX length + \n
    int count = 0;


	// Open File
	inFile = fopen("Names.txt", "r");

	// Check argument count
	if(argc != 2)
	{
		printf("Usage: fileName\n");
		exit(1);
	}

	if (inFile == NULL)
	{
		printf("Can't open input file in.list!\n");
		exit(1);
	}
    else
    {
        printf("the file was opened\n");
    }
	// Loop over file and calculate the
	// string length
	while(fscanf(inFile, "%s", name) != EOF)
	{
		printf("scanning %s\n", name);
          count++;
	}
    
	fclose(inFile);

	return 0;
}

