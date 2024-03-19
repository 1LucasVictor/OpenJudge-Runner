#include<stdio.h>
int main()
{
	int a[5],k,i,t;
	for(i=0;i<5;i++)
		scanf("%d\n",&a[i]);
	scanf("%d",&k);
	if(a[4]-a[0]<=k)
		t=1;
	else
		t=0;
	if(t)
		printf("Yay!\n");
	else
		printf(":(\n");
	return 0;
}


