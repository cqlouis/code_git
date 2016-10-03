int input(void)
{
	int i;
	int array[MAX];
	printf("input  MAX  integer\n");

	for (i = 0; i < 10 ; i++)
		scanf("%d",array++);

	printf("you entered  data\n");

	for (i = 0; i < 10 ; i++)
		printf("%d ", array[i])

	printf("\n");


	return 0;
}

