#include <stdio.h>
int main(){
	int a;
	int b;
	int hasil;
	a >= -1000 ;
	b <= 1000 ;
	scanf("%d",&a);
	scanf("%d",&b);
	hasil = a+b;
	if(hasil<=a-b){
		printf("%d",a-b);
	}else if(hasil<= a*b){
		printf("%d",a*b);
	}else{
		printf("%d",a+b);
	}
	return 0;
}