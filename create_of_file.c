#include<stdio.h>
#include<stdlib.h>
int booking();
int cancel();
int tickets=0,seat_numbers=0;
int main()
{
	int n;
	printf("how many tickets u want to be insert in the machine\n");
	scanf("%d",&tickets);
	while(1)
	{
	printf("1.bookings \n 2.cancels \n 3.exits \n");
	scanf("%d",&n);
	switch(n)
	{
		case 1: booking(); break;
		case 2: cancel(); break;
		case 3: exit(0); break;
		default:printf("invalid action\n");
	}
	}
}
int booking()
{
	int required,money;
	printf("how many tickets are required \n");
	scanf("%d",&required);
	if(required>tickets)
	{
		printf("tickets already completed plz be in waiting list \n");
		printf("waiting list availability %d \n",required-tickets);
	}
	else
	{
		printf("tickets are available u may book the tickets\n");
		printf("tickets are availablity %d \n",tickets);
                printf("each ticket price is RS 100\n");
		printf("enter the money \n");
		scanf("%d",&money);
		if(money==(required*100))
		{
			printf("successfully booked \n");
			seat_numbers=seat_numbers+required;
			tickets=tickets-required;
		}
		printf("tickets are present available %d \n",tickets);
	}
}
int cancel()
{
	int n;
	printf("how many tickets u want to be cancel \n");
	scanf("%d",&n);
	if(seat_numbers>=n)
	{
	tickets=tickets-n;
	printf("successfully canceled u r tickets\n");
	}
	else
	{
		printf(" no cancelation not available because no tickets are booked \n");
		printf("verify again \n");
	}
}

