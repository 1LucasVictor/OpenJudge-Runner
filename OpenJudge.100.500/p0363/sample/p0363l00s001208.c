#include<stdio.h>
int main(void){
	int a,b,c,z,i;
	scanf("%d %d %d",&a,&b,&c);
	for(i=0;i<6;i++)
	if(a>b){
			z=b,b=a,a=z,z=0;
			}
			if(a>c){
			z=c,c=a,a=z,z=0;}
			if(b>c){
			z=c,c=b,b=z,z=0;}
	printf("%d %d %d\n",a,b,c);
	return 0;}
	