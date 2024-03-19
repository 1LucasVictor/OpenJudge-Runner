#include<stdio.h>
int main(void){
	int a,n,p=1;
	scanf("%d %d",&a,&n);
	for(int i=0;i<a;i++){
		p*=100;
	}
	if(n==100){
		p*=101;
	}else{
		p*=n;
	}
	printf("%d",p);
	return 0;
}