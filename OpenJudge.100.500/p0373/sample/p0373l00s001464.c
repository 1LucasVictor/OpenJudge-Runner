#include<stdio.h>
int main(void)
{
	int j,i,H=1,W=1;

	while(H!=0 && W!=0){
	
	scanf("%d %d",&H,&W);

	for(j=1;j<=H;j++){
		for(i=1;i<=W;i++){
			if(j==1 || j==H){
				printf("#");
			}else if(i==1 || i==W){
				printf("#");
			}else{
				printf(".");
			}
		}
	printf("\n");
	}
	printf("\n");
	}
}
