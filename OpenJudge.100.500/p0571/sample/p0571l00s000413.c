#include <stdio.h>

int main(){
	int a,b,c,tren;
	scanf("%d %d %d",&a,&b,&c);
	tren=a*b;
	if(tren<c){
		printf("%d",tren);
	}else{
		printf("%d",c);
	}
}