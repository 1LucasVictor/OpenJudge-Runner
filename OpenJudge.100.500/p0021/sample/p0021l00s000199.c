#include<stdio.h>

int main(){
	int i,a,n,x,max,A,X,MAX;
	while(1){
	MAX=0;
	max=0;
	X=0;
	A=0;
	a=0;
	x=0;
	n=0;
	scanf("%d",&n);
	if(n==0){
	break;
	}
	for(i=0;i<n;i++){
	scanf("%d",&a);
	X=X+A;
	x=x+a;
	if(x<0){
	x=0;
	}
	if(x>max){
	max=x;
	}
	if(X>max){
	MAX=X;
	}
	A=a;
	}
	if(max>MAX){
	printf("%d\n",max);
	}
	if(MAX>max){
	printf("%d\n",MAX);
	}
	}
return 0;
}