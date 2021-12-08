#include <stdio.h>
#include <stdlib.h>
main() 
{
	int x[5]={1,2,3,4,5},y[5],i;
	FILE *fp;
	fp=fopen("ff2.txt","w+");
	fwrite(x,sizeof(int),5,fp);
	
	rewind(fp);
	fread(y,sizeof(int),5,fp);
	
	fclose(fp);
	for(i=0;i<5;i++)
		printf("%d ",y[i]);
	
	
}
