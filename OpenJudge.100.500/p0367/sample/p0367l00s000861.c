#include<stdio.h>
int main (void){
	int a,b,c,t;
scanf("%d%d%d",&a,&b,&c);
t=0;

	while(1){
		if(a==b+1)break;
else if (c%a==0)
	t=t+1;
	a=a+1;}
	printf("%d\n",t);
	return 0;
}