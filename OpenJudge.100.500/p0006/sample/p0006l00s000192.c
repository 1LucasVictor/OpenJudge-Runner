#include<stdio.h>
int main(void)
{
	int Money=100000,risi,n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		Money *= 1.05;
		if(Money%1000>1){
			Money /=1000;
			Money *=1000;
			Money +=1000;
		}
	}
	printf("%d\n",Money);
	return 0;
}