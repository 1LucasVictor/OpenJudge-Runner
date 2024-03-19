#include<stdio.h>
int main(void){
	int n;
	scanf("%d", &n);
	if(n/100 == 7 || n/10-n/100*10 == 7 || n-n/10*10 == 7){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
}