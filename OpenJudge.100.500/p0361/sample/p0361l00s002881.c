#include <stdio.h>
int main()
{
	int num,hr,min,sec,temp;
	scanf("%d",&num);
	hr=num/3600;
	temp=num%3600;
	min=temp/60;
	sec=temp%60;
	printf("%d:%d:%d\n",hr,min,sec);
	return 0;
}
