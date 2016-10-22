#include <stdio.h>
#include <stdlib.h>
//#include "input.h"
#define MAX 10

void read(int array[], int n);
void print(int array[], int n);
void origin_sort(int array[], int n);
//void advanced_sort(inti array[], int n);

int main(int argc, char *argv[])
{
//	int i, j, tmp;

/*
	//////////////////////////////////////////////////
	int array[MAX];
	printf("input  MAX  integer\n");

	for (i = 0; i < MAX; i++)
		scanf("%d", &array[i]);

	printf("you entered  data:\n");

	for (i = 0; i < MAX; i++)
		printf("%d ", array[i]);

	printf("\n");
//////////////////////////////////////////////////////////////////////////////
*/
	read(array,10);	
	origin_sort(array, 10);

	print(array, 10);



	return 0;
}


void read(int array[], int n)
{
	FILE *fp;
	if ((fp = fopen("data.txt", "r")) == NULL) {
		printf("failed to read data from a file.\n");
		exit(1);
	}

	else {
		while (fscanf(fp, "%s", array) != EOF)
			array++;
		fclose(fp);
	}

}

void origin_sort(int array[], int n)
{
	int i, j, tmp;
	for (j = 0; j < n - 1; j++) {
		for (i = 0; i < n - 1; i++) {
			if (array[i] < array[i + 1]) {
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
			}
		}
	}
}

void print(int array[], int n)
{
	int i;
	printf("the result is :\n");
	for (i = 0; i < MAX; i++)
		printf("%d ", array[i]);
	printf("\n");
}
