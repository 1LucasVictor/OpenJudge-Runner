#include<stdio.h>
int main(){
	int k,a,b,i,j=0;
	scanf("%d\n",&k);
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
//	printf("%d",i%k);
		if(i%k==0)
		j=1;
		
	}
	if(j==1){
		printf("OK");
	}
	if(j==0){
		printf("NG");
	}
	
}