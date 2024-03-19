/*
 * Transformation.c
 *
 *  Created on: 2015/02/13
 *
 */

#include <stdio.h>
#include <string.h>

int main(void){
	int a,b,q;
	char str[1000],C[100];

	scanf("%s",str);
	scanf("%d",&q);

	for(;q;q--){
		scanf("%s %d %d",C,&a,&b);
		if(!strcmp(C,"replace")){
			scanf("%s",C);
			memcpy(str+a,C,b-a+1);
		}

		else if(!strcmp(C,"reverse")){
			int i;
			strncpy(C,str+a,b-a+1);
			for(i=b;i>=a;i--) str[i]=C[b-i];
		}

		else if(!strcmp(C,"print")){
			strncpy(C,str+a,b-a+1);
			C[b-a+1]=0;
			printf("%s\n",C);
		}

	}
	return 0;
}