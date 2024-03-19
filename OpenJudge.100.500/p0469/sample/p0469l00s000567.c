// Starting with the name of Allah

#include<stdio.h>
int main()
{
	int K,A,B,i,x,y,z=0;
	scanf("%d",&K);
	scanf("%d %d",&A,&B);
	if(B>A){
		x=B-A;
	}
	else if(A>B){
		x=A-B;
	}
	else{
		x=B;
	}
	for(i=1;i<=x;i++){
		y=K*i;
		if(y>=A && y<=B){
				z=2;
			break;
		}
	}
	if(z==2){
		printf("OK\n");
	}
	else{
		printf("NG\n");
	}
}
