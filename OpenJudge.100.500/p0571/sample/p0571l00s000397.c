#include <stdio.h>

int main(void){
	int n,a,b;
	scanf("%d %d %d",&n,&a,&b);
	
	if(a<b){
		if(n*a < b){
			printf("%d\n",n*a);
		}else{
			printf("%d\n",b);
		}
	}else{
		if(n*b < a){
			printf("%d\n",n*b);
		}else{
			printf("%d\n",a);
		}
	}
	
	return 0;
}