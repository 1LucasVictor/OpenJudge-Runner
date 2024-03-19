#include<stdio.h>

int main()
{
	int train[11];
	int i,c,t,n;
	c=0;

	while(scanf("%d",&t)!=EOF)
	{
		if(t==0){
			c--;
			printf("%d\n",train[c]);
		}
		else{
			train[c]=t;
			c++;
		}
	}

	return 0;
}