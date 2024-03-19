#include<stdio.h>

int main(void){
	int i,j,a[100]={},b[100]={},A[100]={},B[100]={},C[100]={},x,y;
	x=0;
	y=0;
	for(i=0;i<100;i++){
	scanf("%d %d",&a[i],&b[i]);
		A[i]=a[i];
		B[i]=b[i];
	}
	for(i=0;i<100;i++){
		if(a[i] == 0 && b[i] == 0){
		y=i;
		break;
		}
		if(a[i] < b[i]){
	x=a[i];
	a[i]=b[i];
	b[i]=x;
	}
	}
	i=0;
	while(1){
		if(i==y){
		break;
		}
	while(1){
		if(i==y){
		break;
		}
		a[i]=a[i]%b[i];
		x=a[i];
		a[i]=b[i];
		b[i]=x;
		if(x == 0){
			C[i]=a[i];
			i++;
		}
		}
		}
		for(i=0;i<y;i++){
			printf("%d %d\n",C[i],B[i]/C[i]*A[i]);
		}
return 0;
}