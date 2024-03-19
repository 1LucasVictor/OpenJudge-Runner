#include <stdio.h>

int main(){
	int A,B,T,sum=0;
	scanf("%d%d%d",&A,&B,&T);
	for(int i=1;i<=T;i++){
		if(i%A==0){
			sum+=B;
		}
	}
	printf("%d\n",sum);
	return 0;
}