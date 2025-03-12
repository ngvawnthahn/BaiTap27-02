#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,p,t,s,d;
	scanf("%d \n %d \n %d",&a,&b,&c);
	if(a+b>c||a+c>b||b+c>a)
	{
		p=a+b+c;
		d=p/2;
		t=d*(d-a)*(d-b)*(d-c);
		s=sqrt(t);
		if(a==b||a==c||c==b){
		printf("tam giac can %d \t %d",p,s);
		}
		else if(a==b&&a==c){		
		printf("tam giac deu %d \t %d",p,s);
		}
		else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==b*b+a*a){
	
		if(a==b||b==c||a==c)
		printf("tam giac vuong can %d \t %d",p,s);
			else
		printf("tam giac vuong %d \t %d",p,s);
		}
			else
		printf("tam giac %d \t %d",p,s);
		
	}
	else printf("kh phai tam giac");
	return 0;
}
