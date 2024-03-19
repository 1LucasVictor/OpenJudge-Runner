#include<stdio.h>

int main(){
		int check=1;
		int in;
		int x,i=1;

		scanf("%d",&in);

		// in%3 ==0 or in%10==0 ? 
		while(check){
				x = i;
				if((x%3) == 0){
						printf(" %d",i);
				}else if((x%10)==3){
						printf(" %d",i);
				}else if((x/=10)>0){
						if((x%10)==3)
							printf(" %d",i);
				}

/*
				if(x){
						printf(" %d",i);
				}
				*/

				if(++i>in){
						check = 0;
				}


		}
		printf("\n");

		return 0;

}
