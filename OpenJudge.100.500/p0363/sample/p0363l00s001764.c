#include<stdio.h>

int main(void){
	int a,b,c,t;
	scanf("%d %d %d",&a,&b,&c);
	while(1){
		if(a>b){
			t=a;
			a=b;
			b=t;
		}else if(b>c){
			t=b;
			b=c;
			c=t;
		}else{
			break;
		}
	}
	printf("%d %d %d\n",a,b,c);
	return 0;
}
