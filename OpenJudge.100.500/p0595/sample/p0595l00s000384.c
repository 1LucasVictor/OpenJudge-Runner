#include<stdio.h>
int main(void)

{
	int A,B,k=1,x[100];
	scanf("%d%d",&A,&B);
	if(A>B){
		for(int i=1;i<B;i++){
			if(A%i==0 && B%i==0){
				x[k]=i;
				//printf("%d\n",x[k]);
				k++;
			}
		}
	}else{
		for(int i=1;i<A;i++){
			if(A%i==0 && B%i==0){
				x[k]=i;
				//printf("%d\n",x[k]);
				k++;
			}
		}
	}
	scanf("%d",&k);
	printf("%d\n",x[k]);
	return 0;
}
