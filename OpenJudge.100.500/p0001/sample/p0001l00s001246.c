#include <stdio.h>

int main(void){
	int a,b,sum,p,q=0;
	while(1){
		if(scanf("%d%d",&a,&b) == EOF)
			break;
		sum=a+b;
		p=0;
		while(sum!=0){
			sum/=10;
			p++;
		}
		printf("%d\n",p);
	}
	return 0;
}