#include<stdio.h>
int main(void){
	int x,tho,hun,ten,one;
	for(;;){
		scanf("%d",&x);
		if( x == 0 ){
			break;
		}
		tho = x/1000;
		hun = x%1000/100;
		ten = x%1000%100/10;
		one = x%1000%100%10;
		printf("%d\n",tho+hun+ten+one);
	}
	return 0;
}