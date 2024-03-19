#include<stdio.h>

int main(void){
	int a,b,c,d;
	scanf("%d\n%d\n%d",&a,&b,&c);
	if(a>b){
		d = a,a = b,b = d;
	}else{
	}
	if(b>c){
		d = b,b = c,c = d;
	}else{
	}
	if(a>b){
		d = a,a = b,b = d;
	}else{
	}
	printf("%d %d %d\n",a,b,c);

	return 0;
}