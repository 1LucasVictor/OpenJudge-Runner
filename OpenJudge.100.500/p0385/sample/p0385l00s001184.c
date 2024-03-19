#include <stdio.h>
int main(void){
	while(1){
		int x,a,b,c,ma,mb,d;
		scanf("%d",&x);
		if(x==0) break;
		a=x/1000;
		ma=x%1000;
		b=ma/100;
		mb=ma%100;
		c=mb/10;
		d=mb%10;
		d=a+b+c+d;
		printf("%d\n",d);
	}
	return 0;
}
