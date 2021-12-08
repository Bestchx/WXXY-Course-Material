#include <stdio.h>
main() 
{
	int a[10]={12,24,31,42,56,61,72,80,91,100},i,low,high,mid,num;
	
	scanf("%d",&num);
	
	for(low=0,high=9;low<=high;)
	{
		mid=(low+high)/2;
		if(num==a[mid]) break;
		else if(num<a[mid]) high=mid-1;
		else low=mid+1;
	}
	if(low>high) printf("Can't found");
	else printf("No %d",mid+1);
}
