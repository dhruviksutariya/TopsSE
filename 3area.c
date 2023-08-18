/*area of circle
#include<stdio.h>
int main()
{
	int r,area;
	printf("enter the value of circle");
	scanf("%d%d",&r,&r);
	area = r*r*3.14;
	printf("%d",area);
	return 0;
}

//area of rectengle
#include<stdio.h>
int main()
{
	int h,w,area;
	printf("enter the value of rectengle");
	scanf("%d%d",&h,&w);
	area=h*w;
	printf("%d",area);
	return 0;
	
}*/

//area of tringle
#include<stdio.h>
int main()
{
	double a,b,c,s,area,sqrt;
	
	printf("enter area of a tringle");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	s=(a+b+c)/2;
	area=(s*(s-a)*(s-b)*(s-c));
	printf("area of the tringle = %lf\n",area);
}
