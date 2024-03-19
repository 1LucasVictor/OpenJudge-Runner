#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	if(a %2 != 0 && b %2 != 0){
		printf("Odd\n");
	}
	else{
		printf("Even\n");
	}
	return 0;
}