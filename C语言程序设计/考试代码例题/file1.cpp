#include <stdio.h>
#include <stdlib.h>
main() 
{
	int a=10,a1;
	float b=35,b1;
	char c='A',c1;
	FILE *fp;
	fp=fopen("ff1.txt","w+");
	fwrite(&a,sizeof(int),1,fp);
	fwrite(&b,sizeof(float),1,fp);
	fwrite(&c,sizeof(char),1,fp);
	rewind(fp);
	fread(&a1,sizeof(int),1,fp);
	fread(&b1,sizeof(float),1,fp);
	fread(&c1,sizeof(char),1,fp);
	fclose(fp);
	printf("%d,%f,%c",a1,b1,c1);
	
	
}
