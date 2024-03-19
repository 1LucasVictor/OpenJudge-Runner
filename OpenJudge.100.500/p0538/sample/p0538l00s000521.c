#include<stdio.h>
int main(){
	int a,b;
	
	scanf("%d %d",&a,&b);
	if(1<=a&&a<=9&&1<=b&&b<=9){
	
	printf("%d",a*b);}
	if(a>=10&&a<=20||b>=10&&b<=20){
	printf("-1");}
	return 0;
} 
