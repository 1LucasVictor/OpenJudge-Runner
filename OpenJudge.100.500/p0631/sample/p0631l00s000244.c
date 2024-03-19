#include <stdio.h>
int main(void){
	int a,b,x;
	scanf("%d %d %d", &a,&b,&x);
	if (x==a)printf("YES\n");
	if (x<a)printf("NO\n");
	if (x>a){
		if(b>x || b==x){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}