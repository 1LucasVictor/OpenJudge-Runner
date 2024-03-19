#include<stdio.h>
int main()
{
	char a[3];
	int i,sum=0;
    scanf("%s",a);
	for(i=0;i<3;i++)
	{
		if(a[i]-'0')sum++;
	}
    printf("%d\n",sum);
    return 0;
} 