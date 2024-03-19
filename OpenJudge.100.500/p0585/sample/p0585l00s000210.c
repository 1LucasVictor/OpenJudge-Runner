#include <stdio.h>

int main(){
	int A;
	int B;
	int T;
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&T);
	int o;
	int i;
	o=0;
	for(i=A;i<T+0.5;i=i+A){
		o=o+B;
	}
	printf("%d",o);
}