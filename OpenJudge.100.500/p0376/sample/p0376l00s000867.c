#include<stdio.h>

int main(void){
	int a[100] ,number ,b;
	
	scanf("%d" ,&number);
	
	for(b = 0; b < number;++b){
		scanf("%d" ,&a[b]);
	}
	
	for(b = number - 1; b > 0;--b){
		printf("%d " ,a[b]);
		}
		printf("%d\n" ,a[0]);
	return 0;
}