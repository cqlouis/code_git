#include <stdio.h>

int f(int n);
int (* pf)(int n) = &f;


int main()
{
	
	int ans;
	
//	ans = f(25);
//	ans = (*pf)(25);
	ans = pf(25);


	printf("ans = %d \n", ans);
	printf("File name is %s\n", __FILE__);
	return 0;
}

int f(int n)
{
	return n*n;
}
