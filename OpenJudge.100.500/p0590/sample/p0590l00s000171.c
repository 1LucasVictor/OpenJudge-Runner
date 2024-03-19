#include<stdio.h>
int main()
{
	int a,b,c,d,e,x;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	scanf("%d",&d);
	scanf("%d",&e);
	scanf("%d",&x);
	if((b-a)<=x&&(c-a)<=x&&(d-a)<=x&&(e-a)<=x)
		{if((c-b)<=x&&(d-b)<=x&&(e-b)<=x)
			if((d-c)<=x&&(e-c)<=x)
				if((e-d)<=x)
					printf("Yay!\n");}
				else
					printf(":(\n");
	return 0;
}