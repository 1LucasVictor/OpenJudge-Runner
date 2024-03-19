#include <stdio.h>
int main (void)
{
	int n;
	int a=1;
	int b;
	scanf("%d",&n);
	for(a=1;a<=n;a++){
		if(a % 3 == 0 ||  a % 10 == 3){
			printf(" %d",a);
		}
		else{
			b = a;
		while(1){
		b/=10;
		if(b%10 ==0){
			break;
		}
		if( b % 10 == 3){
			printf(" %d",a);
		}
		}
	}
		}
		printf("\n");
		return 0;
}