#include<stdio.h>
int main(void){
	int a,b,c,t,i,x;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		t=a;
		a=b;
		b=t;
	}
	x=0;
	for(i=a;i<=b;i++){
		if((c%i)==0){
			x++;
		}
	}
	printf("%d\n",x);
	return 0;
}
