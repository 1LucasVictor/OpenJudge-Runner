#include<stdio.h>

int main(){
	int i,a,n,x,max;
	while(1){
	max=0;
	a=0;
	x=0;
	n=0;
	scanf("%d",&n);
	if(n==0){
	break;
	}
	for(i=0;i<n;i++){
	scanf("%d",&a);
	x=x+a;
	if(x<0){
	x=0;
	}
	if(x>max){
	max=x;
	}
	}
	printf("%d\n",max);
	}
return 0;
}