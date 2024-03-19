#include <stdio.h>

int main(){
	int a,b,n;

	scanf("%d %d %d",&n,&a,&b);
	if(n*a <= b){
		printf("%d\n",n*a);
	} else {
		printf("%d\n",b);
	}
	return 0;
}