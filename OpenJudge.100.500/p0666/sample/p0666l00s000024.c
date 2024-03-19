#include<stdio.h>
int main(){
	int x,a,b;
    scanf("%d" "%d" "%d",&x,&a,&b);
	
		
		if(x < b-a){
			printf("dangerous");
			printf("\n");
		}else if(x > b-a && b-a > 0){
			printf("safe");
			printf("\n");						
		}else if(b-a <= 0){
			printf("delicious");
			printf("\n");
		}

	return 0;
}    

