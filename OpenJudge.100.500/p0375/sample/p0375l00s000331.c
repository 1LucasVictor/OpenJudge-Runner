#include <stdio.h>

int main(void){

	int seisu,miru;

	scanf("%d",&seisu);

	for(miru=3;miru<=seisu;miru++){
		if(miru%3==0){
			printf(" %d",miru);
		}
		else if(miru%10==3){
			printf(" %d",miru);
		}
	}
	printf("\n");


	return 0;

}