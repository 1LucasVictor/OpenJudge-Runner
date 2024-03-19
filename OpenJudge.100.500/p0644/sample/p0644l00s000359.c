#include<stdio.h>

int main(){
	int a, b, count=0;
	scanf("%d", &a);
	do{
		b = a/10;
		if(a-10*b==1)	count++;
		a = b;
	}while(a>=1);
	
	printf("%d", count);
	
	return 0;
}