#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#define FILE_NAME_LENGTH	10

int main(void)
{
	int n;
	menu();
	scanf("%d", &n);

	switch (n) {
	case 1:
		open("hello_file.txt", O_RDWR | O_CREAT , S_IRUSR | S_IWUSR |S_IXUSR);
		break;

	default:
		break;

	}

	return 0;
}



int menu(void)
{
	printf("**************************************************\n");
	printf("*****   1 : create a new file    *****************\n");
	printf("*****   2 : write   to   file    *****************\n");
	printf("*****   3 : create a new file    *****************\n");
	printf("*****   4 : create a new file    *****************\n");
	printf("*****   5 : create a new file    *****************\n");
	printf("**************************************************\n");

	printf(" what do you do ?\n");

	return 0;
}
