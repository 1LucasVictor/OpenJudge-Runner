#include<stdio.h>
int juli(int x,int y)
{
	if(x>y)
	return (x-y);
	else
	return (y-x);
}
int main()
{
	int a[5];
	int k;
	scanf("%d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&k);
	int i,j,l=1;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			if(juli(a[i],a[j])>k)
			{l=0;goto loo;}
	loo:
	if(l)
		printf("Yay!\n");
	else
		printf(":(\n");
	return 0;
}