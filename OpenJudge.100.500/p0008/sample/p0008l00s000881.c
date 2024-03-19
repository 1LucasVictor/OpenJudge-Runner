#include<stdio.h>

int prime(int num);

int main(void){

	int n,i,count;
	while(scanf("%d",&n)!=EOF){
	count=1;
	for(i=3;i<=n;i=i+2){
		count=count+prime(i);
		}
	printf("%d\n",count);
	}
	return 0;
}
int prime(int num){
	int i;
	for(i=3;i<num-1;i++){
		if(num%i==0){return 0;}
	}
	return 1;
}