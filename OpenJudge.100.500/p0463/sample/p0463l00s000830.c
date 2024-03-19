/*  ex3_2
    potter0723sw  */

#include <stdio.h>

int main(void) {
	int number,poo;
	scanf("%d", &number);
	poo = number % 10; //pooはplace of oneの略
	if(poo == 2 || poo == 4 || poo == 5 || poo == 7 || poo == 9){//１の位を参照するために%10をした
		printf("hon\n");
	}else if(poo == 0 || poo == 1 || poo == 6 || poo == 8){
		printf("pon\n");
	}else printf("bon\n");
	return 0;
}
