#include<stdio.h>

int main(void){
	int n,tem,a=0,b=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&tem);
		if(tem%2==0){
			a+=1;
			if(tem%3 == 0 || tem%5==0){
				b+=1;
			}
		}
	}
	if(a==b){
		printf("APPROVED");
	}else{
		printf("DENIED");
	}

	return 0;
}
		