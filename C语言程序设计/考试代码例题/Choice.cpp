#include <stdio.h>
#define N 5
main() 
{
	int a[N],j,i,t,m;
	for(i=0;i<N;i++)
		scanf("%d",&a[i]);
	
	for(j=0;j<N-1;j++)
	{
		m=j;
		for(i=j+1;i<N;i++)
		{
			if(a[m]>a[i]) m=i;
		}
		t=a[m],a[m]=a[j],a[j]=t;
	}
	
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
}
