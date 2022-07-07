#include<stdio.h>
int main()
{
	int a[1024][1024],i,j;
	for(i=0;i<1024;i++)
		for(j=0;j<1024;j++)
			printf("%d ",a[j][i]=i*j);
	printf("\n");
}
