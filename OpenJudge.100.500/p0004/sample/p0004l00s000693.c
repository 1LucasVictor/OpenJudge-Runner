#include <stdio.h>
#include <math.h>

int main(void){
	long b,a,p,q,h,k;

while(scanf("%d %d",&a,&b)!=EOF){
	p=a;
	q=b;
	while(1){
		a=a%b;
		if(a==0){
			break;
		}
		h=a;
		a=b;
		b=h;
	}
	k=p/b;
	printf("%d %d\n",b,k*q);
}






return 0;
}