#include<stdio.h>
int main(){
	int x,a,b;
	scanf("%d%d%d",&x,&a,&b);
	if(b-a>x+1){
		printf("dengerous\n");
	}else{
		if(b-a<=0){
			printf("delicious\n");
		}else{
			printf("safe\n");
		}
	}
	return 0;
}