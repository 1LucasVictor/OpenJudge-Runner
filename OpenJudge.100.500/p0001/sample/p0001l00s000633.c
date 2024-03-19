#include<stdio.h>

int main(void){

	int a=0,b=0,wa,i,keta;

	while(scanf("%d %d",&a,&b)!=EOF){
		keta=0;
		wa=a+b;

		if(wa!=0){
			while(wa>0){
				wa=wa/10;
				keta++;
			}
		}
		else{
			keta=1;
		}
	
		printf("%d\n",keta);
	}
	return 0;
}