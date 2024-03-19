#include <stdio.h>

int main(){
	int a,b,sum,keta=1;
	
	while(scanf("%d%d",&a,&b)!=EOF){
		keta=1;
		sum=a+b;
	

	while (sum/10!=0){
		sum=sum/10;
		keta=keta+1;
	}
	printf("%d\n",keta);
	
	}
	return 0;
}