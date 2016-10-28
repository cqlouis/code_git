#include <stdio.h>

void fun_point()
{
	printf("This function fun_pointer was executed!\n");
}

void called_fun(int n, void (* f )())
{
	fun_pointer();
}

int  main()
{


	return 0;
}
