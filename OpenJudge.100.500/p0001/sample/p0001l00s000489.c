#include<stdio.h>

int main(void){
	int a,b,an,i;
	while(scanf("%d %d",&a,&b)!=EOF){
		an = a+b;
		if(an==0){
			i=1;
		}else{
			for(i=0;an>0;i++){
			an/=10;
			}
		}
		printf("%d\n",i);
	}
	return 0;
}