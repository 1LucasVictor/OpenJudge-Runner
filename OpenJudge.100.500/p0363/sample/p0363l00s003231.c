#include<stdio.h>

main(void){
	int a[3],x;
		scanf("%d %d %d\n",&a[0],&a[1],&a[2]);
	
	if(a[0]>a[1]){
	x=a[0];
		a[0] = a[1];
	a[1]=x;}
	
	if(a[1]>a[2]){
	x=a[1];
		a[1] = a[2];
	a[2]=x;}
	
	if(a[0]>a[1]){
	x=a[0];
		a[0] = a[1];
	a[1]=x;}
	
	printf("%d %d %d\n",a[0],a[1],a[2]);
return 0;
}
