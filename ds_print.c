#include<stdio.h>
struct st
{
	int roll;
	float mark;
	char name[20];
};
int main()
{
	struct st v={1,1,"hi"},{2,2,"has"},{3,3,"phh"};
	//struct st v={1,2,"hi"};
	int i;
	for(i=0;i<3;i++)
	{
		printf("%d %f %s \n",v.roll,v.mark,v.name);
	}
}

