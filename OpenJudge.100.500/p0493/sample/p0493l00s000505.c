#include<stdio.h>
int main(){
	int a;
	int sum=0;
	scanf("%d",&a);
	sum=(a/500)*1000;
	a=a%500;
	sum=sum+a/5*5;
	printf("%d",sum);
}