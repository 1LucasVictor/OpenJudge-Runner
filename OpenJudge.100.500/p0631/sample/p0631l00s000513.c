#include <stdio.h>
int main(void){
	int a,b,x;
	scanf("%d %d %d", &a,&b,&x);
	if (x==a)printf("YES\n");
	else if (x<a)printf("NO\n");
	else if (x>a){
		if(a+b>=x || b==x){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}