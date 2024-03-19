#include<stdio.h>

int main()
{
	int n;
	int i;
	int loan=100000;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		loan+=(loan/20);
		if((loan%1000)>0){
			loan+=(1000-loan%1000);
		}
	}
	printf("%d\n",loan);
	return 0;
}