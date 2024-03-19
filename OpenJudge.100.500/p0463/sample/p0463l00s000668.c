/* ex3_2
  bonbonc */

#include<stdio.h>

int main(void){

	int number;

	
	scanf("%d",&number);
	number%=10;		/*1の位を取り出す*/
	switch (number){	/*場合分け*/
		case 2:
		case 4:
		case 5:
		case 7:
		case 9:
			printf("hon\n");
			break;
		case 0:
		case 1:
		case 6:
		case 8:
			printf("pon\n");
			break;
		case 3:
			printf("bon\n");
			break;
	}
	
	return 0;
}