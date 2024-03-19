#include<stdio.h>

int main(){
	int a,b,c,i;
	scanf("%d %d %d",&a,&b,&c);
	
	i = a-b;
	i = c-i;
	if(i<0)i = 0;
	
	printf("%d",i);
	return 0;
}