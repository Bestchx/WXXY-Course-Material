#include <stdio.h>
#include <stdlib.h>
void show(struct stu *h);
struct stu
{
	int no;
	float sc;
	struct stu *next;
};

main() 
{
	struct stu *head=NULL,*p,*q;
	int num;
	
	scanf("%d",&num); 
	while(num>=0)
	{
		p=(struct stu*)malloc(sizeof(struct stu));
		p->no=num;
		scanf("%f",&p->sc);
		p->next=NULL;
		if(head==NULL)	
		{
			head=p;
			q=p;
		}
		else{
			q->next=p;
			q=p;
		}
		scanf("%d",&num); 
	}
	show(head);
}
void show(struct stu *h)
{
	struct stu *p=h;
	while(p!=NULL)
	{
		printf("%d,%.0f\n",p->no,p->sc);
		p=p->next;
	}
}


