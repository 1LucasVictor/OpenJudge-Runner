#include<stdio.h>
int main(void){
	int n,k=100000;
	scanf("%d",&n);
	while(n>0){
		n--;
		k*=1.05;
		if(k%1000>0)k=(k/1000+1)*1000;
	}
	printf("%d\n",k);
	return 0;
}