#include<stdio.h>

int main(){
	
	int A,B,C,D,i,ans=0;
	scanf("%d %d %d %d",&A,&B,&C,&D);
	
	for(i=0;i<=100;i++){
	if(A<=i&&i<=B&&C<=i&&i<=D){
		ans++;
	}
	}
	
	if(ans>0){
		printf("%d",ans-1);
	}else {
		printf("0");
	}
	
	return 0;
}