#include<stdio.h>
int main(void)
{
	int a, b, x, i, k=0;
	scanf("%d %d %d",&a,&b,&x);
	for(i=a;i<=b;i++){
		if(x%i==0){
			k++;
		}
	}
	printf("%d\n", k);
}