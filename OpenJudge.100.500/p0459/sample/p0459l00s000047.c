#include<stdio.h>
int main()
{
	int head,leg;
	scanf("%d%d",&head,&leg);
	if(leg>=head*2&&leg<=head*4&&leg%2==0) printf("Yes");
	else printf("No");
	return 0;
}