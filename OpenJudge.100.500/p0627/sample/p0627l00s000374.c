#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	int d;
	int hasil;
	scanf("%d",&a);
	scanf("%d",&b);
	hasil = a+b;
	c = a-b;
	d = a*b;
	if(hasil< a-b){
		printf("%d",a-b);
	}else if(hasil< a*b){
		printf("%d",a*b);
	}else{
		printf("%d",hasil);
	}
	return 0;
}