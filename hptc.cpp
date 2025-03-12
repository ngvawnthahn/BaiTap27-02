#include<stdio.h>
#include<math.h>
float a,b,c,d,e,f,x,y;
int main()
{
	printf("nhap lan luot a,b,c,d,e,f vào he pt:a*x+b*y=c,d*x+e*y=f\n");
	scanf("%f\n%f\n%f\n%f\n%f\n%f",&a,&b,&c,&d,&e,&f);
	float det=a*e-b*d;
	if(det==0)
	{
		if(a*f-d*c==0&&c*e-b*f==0)
		printf("pt vo so nghiem");
		else 
		printf("pt vo nghiem");
	}
	else
	{
		float k=c*e-b*f;
		float h=a*f-d*c;
		printf("x:%f\n",k/det);
		printf("y:%f",h/det);
	}
}
