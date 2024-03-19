#include<stdio.h>
 
int main(void){
	int x=0,a=0,b=0;
	scanf("%d %d %d",&x,&a,&b);
	
	if(0-a+b > x){
		printf("dangerous\n");
	}else if(0-a+b >0){
		printf("safe\n");	
	}else{
		printf("delicious\n");
	}
	return 0;
}