#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	float x1,x2,x,d,t;
	d=b*b-4*a*c;
    t= sqrt(d);
	x1=(-b-t)/(2*a);
	x2=(-b+t)/(2*a);
	x=-b/(2*a);
	if(d>0)
	{
		printf("pt co 2 nghiem la: %f \t %f",x1,x2);
	}
	else if(d==0)
	{
		printf("pt co nghiem duy nhat la: %f",x);
	}
	else
	{
		printf("pt vo nghiem");
	}
	return 0;
}
