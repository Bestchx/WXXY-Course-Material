#include <stdio.h>
#define N 5
main() 
{
	int a[N],j,i,t;
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	
	for(j=1;j<N;j++)
	{
		for(i=0;i<N-j;i++)
		{
			if(a[i]>a[i+1]) t=a[i],a[i]=a[i+1],a[i+1]=t;
		}
	}
	
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
}
