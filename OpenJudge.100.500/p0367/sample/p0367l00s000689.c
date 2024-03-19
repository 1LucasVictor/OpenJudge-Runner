#include<stdio.h>

int main(void){

	int a,b,c,sum=0,i;

	scanf("%d %d %d",&a,&b,&c);

	for(i=a;i<=b;i++){

		if( c % i == 0)
			sum++;

	}

	printf("%d\n",sum);

	return 0;


}