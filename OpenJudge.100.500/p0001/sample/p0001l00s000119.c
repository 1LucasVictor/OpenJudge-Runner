#include <stdio.h>
#include <math.h>

int main(void){
	int t,i,h,b,a;

while(scanf("%d %d",&a,&b)!=EOF){
	h=a+b;
	for(t=0;h!=0;t++){
		h=h/10;
	}
	printf("%d\n",t);
}




return 0;
}