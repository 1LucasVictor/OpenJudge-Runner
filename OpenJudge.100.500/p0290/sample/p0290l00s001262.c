#include <stdio.h>
int IsPrime(int n)
{
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}	
int main(void)
{
	int count=0,n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int p;
		scanf("%d",&p);
		if(IsPrime(p)){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}

