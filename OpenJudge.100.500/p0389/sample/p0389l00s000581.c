#include <stdio.h>
#include<string.h>
char s[205];
int l,m,h,i;
void rev(int r,int l)
{
	char x;
	for(;r<l;r++,l--)
	{
		x=s[r];s[r]=s[l];s[l]=x;
	}
}
int main()
{
	for(;scanf("%s",s),s[0]!='-';)
	{
		l=strlen(s)-1;
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			scanf("%d\n",&h);
			rev(0,h-1);
			rev(h,l);
			rev(0,l);
		}
		puts(s);
	}
	return 0;
}