#include<stdio.h>
int main(){
	int a , b;
	int i;
	scanf("%d %d" , &a , &b);
	if(b == 1) {
		printf("%d\n" , a+b);
	}
	for(i = 2 ; i <= b/2 ; i++){
		if(a%i == 0) {
			printf("%d\n" , a+b);
			return 0;
		}		
	}
	printf("%d\n" , b-a);
	return 0;
}