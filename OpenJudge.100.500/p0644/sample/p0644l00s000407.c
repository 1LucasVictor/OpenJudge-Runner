#include<stdio.h>
 
int main()
{
	int i,cnt=0;
	char s[4];
	scanf("%s",s);
	for(i=0;i<3;i++)
	{
		if(s[i]=='1')
		{
			cnt++;
		}
	}
	printf("%d\n",cnt);
	return 0;
}