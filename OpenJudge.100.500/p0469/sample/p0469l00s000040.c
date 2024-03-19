#include<stdio.h>
int main(){
	int k,a,b,i,j=0;
	scanf("%d\n",&k);
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
		if(i%k==0) j=1;
		else j=0;
	}
	if(j=1){
		printf("OK\n");
	}
	else{
		printf("NG\n");
	}
}