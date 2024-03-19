#include <stdio.h>

int main(void)
{
	int flag=0;
	char a[5];
	scanf("%s",&a);
	if(a[0]==a[1]&&a[2]==a[3])flag=1;
	if(a[0]==a[2]&&a[1]==a[3])flag=1;
	if(a[0]==a[3]&&a[1]==a[2])flag=1;
	
	if(flag==1)printf("Yes\n");
	else printf("No\n");
	
	return 0;
}
