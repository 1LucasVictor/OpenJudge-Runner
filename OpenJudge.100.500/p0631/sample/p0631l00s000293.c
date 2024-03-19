#include <stdio.h>
int main(){
	int a,b,x;
	scanf("%d %d %d",&a,&b,&x);
	if(a>x){
		printf("NO");
		return 0;
	}
	if(a+b<x){
		printf("NO");
		return 0;
	}else{
		printf("YES");
		return 0;
	}
}