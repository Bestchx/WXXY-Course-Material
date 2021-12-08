#include <stdio.h>
#include <stdlib.h>
main() 
{
	char s[]="girls and boys",s1[50],i;
	FILE *fp;
	fp=fopen("ff3.txt","w+");
	if(fp==NULL)
	{
		printf("Can't open file'");
		exit(0);
	}
	fwrite(s,sizeof(s),1,fp);
	
	rewind(fp);
	fread(s1,sizeof(s),1,fp);
	
	fclose(fp);
	puts(s1);
	
	
}
