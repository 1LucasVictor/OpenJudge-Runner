#include <stdio.h>
#include <string.h>

int doubleup(int num,int goal);

int main()
{
	int n,a,b,c,d,flag=1;
	char road[200010];
	char *p,*q;
	scanf("%d %d %d %d %d",&n,&a,&b,&c,&d);
	scanf("%s",road);
	
	p=strstr(road+a,"##");
	if((p)&&(p-road)<d)flag=0;
	else
	{
		if(c>d)
		{
			q=strstr(road+b-2,"...");
			//printf("%d %d\n",q-road+1,d);
			if((q)&&(q-road+1)<d)flag=1;
			else flag=0;
		}
	}
	if(flag)printf("Yes");
	else printf("No");
}
