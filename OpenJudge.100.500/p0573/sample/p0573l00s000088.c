#include<stdio.h>
int main(void)
{
	int x=0,y=0,i,j;
	char s[4];
	scanf("%s", s);
	for(i=1; i<4; i++)
	{
		if(s[0]==s[i])
		x++;
		else
		{
			for(j=i+1; j<4; j++)
			{
				if(s[i]==s[j])
				y++;
			}
		}
	}
	if(x==1&&y==1)
	printf("Yes\n");
	else
	printf("No\n");
	
	return 0;
}