#include<math.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		if(i%10==3 || i%100/10==3 || i%1000/100==3 || i/1000==3 || i%3==0)
			printf(" %d",i);
	printf("\n");
	return 0;
}
