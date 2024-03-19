#include<stdio.h>
int main(void){
	int i,k,a,b;
    scanf("%d%d%d",&k,&a,&b);
	for(i=b;i>=a;i--){
		if(i%k){
        }else{
            printf("OK");
			return 0;
        }
	}
	printf("NG");
	return 0;
}