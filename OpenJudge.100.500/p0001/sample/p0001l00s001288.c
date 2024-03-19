#include<stdio.h>
int main(void){
    int a,b,c;
	int count=1;
	while(scanf("%d %d",&a,&b)!=EOF){
	c=a+b;
	while(c>=10){
	c=c/10;
	count++;
	}
	printf("%d\n",count);
	count=1;
}
}