#include <stdio.h>
int fun(int n)
{
	if(n==1) return 1;
	else
		return fun(n-1)*n;
}

main() 
{
	int a=fun(5);
	printf("%d",a);
}
