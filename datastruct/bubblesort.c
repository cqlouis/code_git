#include <stdio.h>
//#include "input.h"
#define MAX 10

int main(void)
{
	int i, j, tmp;

	//////////////////////////////////////////////////
	int array[MAX];
	printf("input  MAX  integer\n");

	for (i = 0; i < MAX ; i++)
		scanf("%d",&array[i]);

	printf("you entered  data\n");

	for (i = 0; i < MAX ; i++)
		printf("%d ", array[i]);

	printf("\n");
	
	/////////////////////////////////////////////////
	for (j = 0 ; j < MAX - 1  ; j++) {
	for (i = 0 ; i < MAX - 1 ; i++) {
		if (array[i] < array[i + 1]) {
			tmp = array[i];
			array[i] = array[i+1];
			array[i+1] = tmp;
		}
	
	}
	}
	
	for (i = 0 ; i < MAX ; i++) {
		printf("%d ", array[i]);
	}

	printf("\n");

	return 0;
}


