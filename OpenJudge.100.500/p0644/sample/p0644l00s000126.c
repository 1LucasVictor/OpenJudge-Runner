#include <stdio.h>

int main()
{   int i = 0 ,count = 0;
	 char a[3];
	scanf("%s",a);
	
	if(a[0]=='1') count ++;
	if(a[1]=='1')count++;
	if(a[2]=='1')count++;
	
	printf("%d  \n",count);
	return 0;
}
