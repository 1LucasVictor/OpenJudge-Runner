#include<stdio.h>
int main(void){

int n,x=0,i=1;

scanf("%d",&n);

	for(i=1;i<=n;i++){
		if(i%3 == 0){
			printf(" %d",i);
		}
		else{
			if(i%10 == 3){
			printf(" %d",i);
			}
			else{
				x = i;
				while(x!=0){
					if(x%10 != 3){
					x = x/10;
					}
					else{
					printf(" %d",i);
					break;
					}
				}
			}
		}
	}
	printf("\n");
return 0;
}

