#include<stdio.h>

int main(void){
	int x,a,b;

	
	
	scanf("%d",&x);
	scanf("%d",&a);
	scanf("%d",&b);
	
	if(b-a>0 && x>b-a){
		printf("safe\n");
	}else if(b <= a){
		printf("delicious\n");
	}else if(x+1<b-a){
		printf("dangerous\n");
	}
}	
	