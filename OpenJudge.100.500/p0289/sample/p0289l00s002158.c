#include <stdio.h>

int main(void){
	int a,b,r,temp;
	scanf("%d%d",&a,&b);

	if(a<b){
		temp=b;
		b=a;
		a=temp;
	}

	while(b>0){
		r=a%b;
		a=b;
		b=r;
	}
	printf("%d\n",a);
	return 0;
}