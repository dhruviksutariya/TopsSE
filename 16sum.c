#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=10;i++)
	{
		sum=sum+i;
		printf("%d\n",i);
	}
	printf("=========================================");
	printf("\n sum %d",sum);
	return 0;
}
