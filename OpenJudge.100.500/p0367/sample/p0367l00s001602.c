#include <stdio.h>

int main (void){

	int a,b,c;
	int yakusu = 0;
	scanf("%d %d %d",&a,&b,&c);
	
	while(a<=b){
		if(c%a == 0){
			yakusu++;
		}
		a++;
	}
	printf("%d\n",yakusu);
	return 0;
}