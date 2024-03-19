#include<stdio.h>
int main(){
	int a , b;
	int i;
	scanf("%d %d" , &a , &b);
	if(b%a == 0){
		printf("%d\n" , a+b);
		return 0;
	}
	printf("%d\n" , b-a);
	return 0;
}