/*
 * main.c
 *
 *  Created on: 2019/02/16
 *      Author: londo
 */

#include<stdio.h>

int main(){
	int A,B;
	scanf("%d %d",&A,&B);
	if(B%A==0) printf("%d\n",A+B);
	else printf("%d\n",B-A);
	return 0;
}
