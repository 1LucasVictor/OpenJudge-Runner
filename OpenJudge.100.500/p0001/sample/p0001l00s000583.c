#include<stdio.h>

int main(void){
	int i,j,a[200],b[200],x[200],A;
	for(i=0;i<3;i++){
		a[i]=0;
		b[i]=0;
	scanf("%d %d",&a[i],&b[i]);
	}
	A=0;
	for(i=0;i<3;i++){
	A=a[i]+b[i];
	x[i]=1;
	for(j=0;j<7;j++){
		if(A >= 10){
		x[i]=x[i]+1;
	}
	A=A/10;
	}
	}
	
	for(i=0;i<3;i++){
		printf("%d\n",x[i]);
	}
return 0;
}