#include<stdio.h>
int main(void){
	int n;
	int i;
	int a=100000;
	while(scanf("%d",&n)!=EOF){
	for(i=0;i<n;i++){
		a=a+a*0.05;
		if((a%1000)>0){
			a=a-a%1000+1000;
		}
	}
	printf("%d\n",a);
	}
	return 0;
}