#include<stdio.h>

int main(void){
	int a,b,c,d,e;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a>=c+e && b>=d+e && c-e>=0 && d-e>=0){
		puts("Yes");
	}else{
		
		puts("No");
	}
	return 0;
}

