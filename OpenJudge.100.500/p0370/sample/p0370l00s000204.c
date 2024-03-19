/*
 * sample.c
 *
 *  Created on: 2017/05/09
 *      Author: SS-76
 */


#include <stdio.h>

int main(void) {

	int a, b;
	char op ;

	do{
		scanf("%d",&a);
		(void)getchar();
		scanf("%c",&op);
		(void)getchar();
		scanf("%d",&b);
		(void)getchar();



			if ('+' == op){
				printf("%d\n",a+b);
			}

			if ('-' == op){
				printf("%d\n",a-b);
			}

			if ('*' == op){
				printf("%d\n",a*b);
			}

			if ('/' == op){
				printf("%d\n",a/b);
			}




	}while(op != '?');

	return 0;
}