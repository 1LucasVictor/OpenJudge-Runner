#include<stdio.h>
int main()
{
	int a[3],i,sum=0;
	for(i=0;i<3;i++)
	{ 
	scanf("%d",&a[i]);
	if(a[i])sum++;
    }
    printf("%d\n",sum);
    return 0;
} 