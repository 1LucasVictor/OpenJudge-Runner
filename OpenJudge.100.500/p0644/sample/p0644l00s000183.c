#include<stdio.h>
int main()
{
	char a,b,c;
	int d=0;
	scanf("%c%c%c",&a,&b,&c);
	if (a=='1')
	d++;
	if (b=='1')
	d++;
	if (c=='1')
	d++;
	printf("%d\n",d);
	return 0;
}