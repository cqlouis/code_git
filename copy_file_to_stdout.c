#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int c;
	FILE *fp;

	if ((fp = fopen(argv[1], "r")) == NULL) {
		printf("failed to open file: %s \n", argv[1]);
		exit(1);
	} else
		while ((c = fgetc(fp)) != EOF)
			fputc(c, stdout);

	return 0;
}
