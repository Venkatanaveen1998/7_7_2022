#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll;
	float marks;
	char name[40];
	struct student *link;
};
//struct student *add_bign(struct student *);
struct student *add_endn(struct student *);
void display(struct student *);

int main()
{
	struct student *head=NULL;
        int choice;
	while(1)
	{
		printf(" 1.adding node at beginging \n 2.adding node at ending \n 3.display \n 4.exit ");
		printf("enter the choice u required\n");
		scanf("%d",&choice);
		switch(choice)
		{
			//case 1:head=add_bign(head); break;
			case 2:head=add_endn(head); break;
			case 3:display(head);
			case 4:exit(0);
		       default:printf("invalid choice please enter valid choice u required");
		}
	}
}
struct student *add_bign(struct student *ptr)
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
			temp=ptr;
			ptr=newnode;
			ptr->link=temp;
		}
	}
	return ptr;
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
	}
	return ptr;
}
void display(struct student *ptr)
{
	if(ptr==NULL)
	{
		printf("no nodes are exits");
	}
	while(ptr)
	{
		printf("%d %f %s\n",ptr->roll,ptr->marks,ptr->name);
		ptr=ptr->link;
	}
}
