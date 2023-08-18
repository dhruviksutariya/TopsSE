#include<stdio.h>
int main()
{
	int s,p,n;
	float si;
	printf("enter the value of simple intrest");
	scanf("%d%d%d",&s,&p,&n);
	si=s*p*n/100;
	printf("%f",si);
	return 0;
}
