#include <stdio.h>

int main(){
	int a,b,ans;
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("1\n");
		return 0;
	}
	for(int i=1;i<100;i++){
		if(a*i-(i-1)>=b){
			printf("%d\n",i);
			break;
		}
	}
	
	return 0;
}