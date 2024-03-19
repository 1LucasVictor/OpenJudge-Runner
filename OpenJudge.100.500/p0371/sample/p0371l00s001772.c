#include<stdio.h>
int main()
{
	int n;
	int a;
	int Min=1000000,Max=-1000000;
	long long Sum=0;
	scanf("%d",&n);
	
	int i;
	for(i=1;i<=n;i++){
		scanf("%d",&a);
		if(Min>a)Min=a;
		if(Max<a)Max=a;
		Sum+=a;
	}
	
	printf("%d %d %lld\n",Min,Max,Sum);
return 0;
}

