#include <stdio.h>

void swap(int *a, int *b);

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b){
		if(b>c && a<c) swap(&b,&c);
		if(b>c && a>c){
			swap(&b,&c);
			swap(&a,&b);
		}
	}else{
		if(a>c && b<c){
			swap(&a,&c);
		}
		if(a>c && b>c){
			swap(&a,&b);
			swap(&b,&c);
		}
		if(a<c && b<c) swap(&a,&b);
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}

void swap(int *a, int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}