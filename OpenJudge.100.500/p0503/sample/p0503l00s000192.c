#include<stdio.h>
#include<stdlib.h>

int cmpnum(const void * n1, const void * n2)
{
	if(*(int *)n1 >*(int *)n2)
	{
		return -1;
	}
	else if(*(int *)n1 < *(int *)n2)
	{
		return 1;
	}
	else
	{
		return 0;
}
}

int main(void)
{
	int n,i;
	int a[200000]={0};
	int k;
	int score=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&k);
		a[i]=k;
	}
	qsort(a, sizeof(a)/ sizeof(a[0]),sizeof(int),cmpnum);
	for(i=0;i<n-1;i++){
		if(a[i]==a[i+1])
			score++;
	}
	
	if(score>0)
		printf("NO");
	else
		printf("YES");
}