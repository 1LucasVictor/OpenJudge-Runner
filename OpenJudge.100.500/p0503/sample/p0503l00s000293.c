#include<stdio.h>
int  xiangtong(int a[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(a[i]==a[j])
				return 0;
	return 1;
}

int main()
{
	int i,j,n,a[200001],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	temp=xiangtong(a,n);
	if(temp==1) printf("YES");
	if(temp==0) printf("NO"); 
	return 0;	
}