#include <stdio.h>
int main(void){
	int n,a,b,c;
	scanf("%d",&n);
	c=n%10;
	b=(n/10)%10;
	a=(n/100)%10;
	if(c==7){
		printf("Yes\n");
	}else if(b==7){
		printf("Yes\n");
	}else if(a==7){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	return 0;
}