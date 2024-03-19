#include<stdio.h>
#include<math.h>
int prime(int n){
int i;
if(n==2)
return 0;
else if(n<2||n%2==0)
	return 1;
else{
i=3;
while (i<=sqrt(n)) {
	if (n%i == 0) return 1;
	i = i + 2;
	}
return 0;}
}

int main(void)
{
	int a[10000],n,i,count=0;
	scanf("%d",&n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
	{
		if (prime(a[i])==0)count+=1;
	}
	printf("%d",count);
	return 0;
}

