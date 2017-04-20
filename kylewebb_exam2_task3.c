/*
 * =====================================================================================
 *
 *       Filename:  kylewebb_exam2_task3.c
 *       	Usage:  ./kylewebb_exam2_task3.c
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/20/2017 09:58:37 AM
 *       Compiler:  gcc -Wall -Werror
 *         Author:  Kyle Webb (), kylewebbear@weber.edu
 * =====================================================================================
 */
#include <stdio.h>		/* For Standard I/O */
#include <stdlib.h>		/* Standard Library */

#define ROWS 10
#define COLS 6

/* Function Prototypes */

/* Main Program */
int main(int argc, char *argv[])
{
    FILE *inFile;
    int i, count = 0;
    double avg;

    inFile = fopen("waves.txt", "r");
    if(inFile == NULL)
    {
        printf("The file was not opened.\n");
        exit(1);
    }
    printf("The file was opened.\n");
    while(fscanf(inFile, "%d", &i) != EOF)
    {
        printf("Scanning %d\n", i);
        avg += i;
        count++;
    }
    avg = avg/(count * 1.0);
    printf("Avg is %5.2lf\n", avg);

	return 0;
}


/* Function Defenitions */


