#include <stdio.h>

int main(){
	int a,b,c,i;
	for(;;){
	if(scanf("%d %d", &a, &b)==EOF) break;
	c=a+b;
	for(i=1;;i++){
		if(c<10){
			break;
		}else{
			c=(c-(c%10))/10;
		}
	}
	printf("%d\n",i);
	}
	return 0;
}