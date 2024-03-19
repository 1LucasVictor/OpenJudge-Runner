#include<stdio.h>
int a,b,c;

int  main(void){
	scanf("%d ",&a);
    scanf("%d",&b);
	
if(a<=9){
	if(b<=9){
		c=a*b;
		printf("%d",c);
	}else{
		printf("-1");
    }
}else{
	printf("-1");
}
}