#include<stdio.h>
int main(void)
{
	int S,h,m,s;
	scanf("%d",&S);
	h=S/3600;
	m=(S-h*3600)/60;
	s=S-(m*60)-(h*3600);
		printf("%d:%d:%d\n",h,m,s);
	return 0;
}
     