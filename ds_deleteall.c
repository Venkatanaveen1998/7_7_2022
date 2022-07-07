
#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
	float marks;
	char name[40];
	struct student *link;
};
struct student *add_endn(struct student *);
void display(struct student *);
struct student *dellall(struct student *);
int cnt=1;
int main()
{
	struct student *head=NULL;
        int choice;
	while(1)
	{
		printf(" 1.adding node at ending \n 2.display prime roll values \n 3.exit \n 4.delete all \n");
		printf("enter the choice u required\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:head=add_endn(head); cnt++; break;
			case 2:display(head); break;
			case 3:exit(0);
			case 4:head=dellall(head);
		       default:printf("invalid choice please enter valid choice u required");
		}
	}
}
struct student *add_endn(struct student *ptr)
{
	struct student *temp=NULL,*newnode=NULL;
	newnode=calloc(1,sizeof(struct student));
	if(newnode==NULL)
	{
		printf("not created any node");
		return ptr;
	}
	else
	{
		printf("enter roll number\n");
		scanf("%d",&newnode->roll);
		printf("enter marks \n");
		scanf("%f",&newnode->marks);
		printf("enter name\n");
		scanf("%s",newnode->name);
		if(ptr==NULL)
		{
			ptr=newnode;
		}
	
		else
		{
			for(temp=ptr;temp->link!=NULL;temp=temp->link);
			temp->link=newnode;
		}
	}return ptr;
}
struct student *dellall(struct student *ptr)
 {  struct student *temp=NULL,*prev=NULL;
      while(ptr)
      {
	      temp=ptr;
	      prev=temp;
	      ptr=ptr->link;
	      free(temp);
	      temp=NULL;
      }



}
void display(struct student *ptr)
{int i=0;
	struct student *temp=NULL;
	if(ptr==NULL)
	{
		printf("no nodes are exits\n");
	}
	else
	{
               while(ptr)
	       {
	      	printf("%d %f %s \n",ptr->roll,ptr->marks,ptr->name);
		ptr=ptr->link;
	       }
	}
	
}
