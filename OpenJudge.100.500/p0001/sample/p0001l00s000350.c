/*
 ============================================================================
 Name        : AOJ1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int a,b;
	while(scanf("%d",&a)!=EOF){
		scanf("%d",&b);
		printf("%d\n",(int)log10(a+b)+1);
	}


	return 0;
}