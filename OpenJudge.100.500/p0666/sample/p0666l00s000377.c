#include <stdio.h>



int main(){
	int x,a,b;
	scanf("%d %d %d\n",&x,&a,&b);
	int diff=b-a;
	if(diff<=0){
		puts("delicious");
	}else if(diff<=x){
		puts("safe");
	}else{
		puts("dangerous");
	}
}
