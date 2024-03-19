#include<stdio.h>
int main()
{
	int cnt,cnt2,i;
	char a[4];
	scanf("%s",a);
	if(a[0]==a[1]&&a[1]==a[2]) printf("No\n");
	else printf("Yes\n");
	return 0;
}