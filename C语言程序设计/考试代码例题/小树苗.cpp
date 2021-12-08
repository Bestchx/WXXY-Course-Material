#include <stdio.h>
int age(int n)
{
	if(n==1) return 10;
	else return age(n-1)+2;
}

main() 
{
	int a=age(5);
	printf("%d",a);
} 
