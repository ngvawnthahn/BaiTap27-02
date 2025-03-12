#include<stdio.h>
#include<math.h>
int main()
	{
	int a;
	scanf("%d",&a);
	if(a>=0&&a<=10)
{
	if(a>=0&&a<5)
	printf("yeu");
	else if(a>=5&&a<7)
	printf("trung binh");
	else if(a>=7&&a<8)
	printf("kha");
	else if(a>=8&&a<9)
	printf("gioi");
	else if(a>=9&&a<=10)
	printf("xuat xac");
}
	else printf("nhap lai diem");
}
