#include<stdio.h>
int main(void){
	int X,A,B;
	scanf("%d %d %d",&X,&A,&B);
	if(A>=B){
		printf("delicious\n");
	}
	else if(A<B){
		if(B-A<=X){
			printf("safe\n");
		}
		else if(B-A>X){
			printf("dangerous\n");
		} 
	}
	return 0;
}