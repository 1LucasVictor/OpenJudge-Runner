#include <stdio.h>
int main(void){
	int a,b,x;
	scanf("%d%d%d",&a,&b,&x);
	if(x-a>=0){
		if(b-(x-a)>=0){
			printf("YES");
		}else{
			printf("NO");
		}
	}else{
		printf("NO");
	}
	return 0;
}