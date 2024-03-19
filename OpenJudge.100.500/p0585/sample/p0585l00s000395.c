#include <stdio.h>

int main(void){
	
	int A,B,T,count=0;
	
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&T);
	
	while(A<T){
		count+=B;
		T-=A;
	}
	
	printf("%d",count);
	
	return 0;
}