#include <stdio.h>
int main(){
	
	int num;
	scanf("%d", &num);
	
	int sum = num + num*num + num*num*num;
	printf("%d", sum);	
	
	return 0;
}