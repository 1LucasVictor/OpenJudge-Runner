#include<stdio.h>
int main(void){
	int a=1,n,d,i;
	scanf("%d %d",&d,&n);
	for(i=0;i<d;i++){
		a=a*100;
	}
	printf("%d\n",n*a);
	return 0;
}
