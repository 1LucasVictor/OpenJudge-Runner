#include <stdio.h>
//#define debug

int main (int argv, char *argc[]){
	int a, b, c;
	int idx;
	int count=0;
	scanf("%d %d %d", &a, &b, &c);
	#ifdef debug
		printf("count before for:%d\n", count);
	#endif
	/* cの約数割り出し */
	for(idx = a; b > idx; idx++){
		if(!(c % idx))count++;
		if(idx > c) break;
		#ifdef debug
			printf("idx:%d\n", idx);
			printf("count:%d\n", count);
		#endif
	}
	
	printf("%d\n", count);	
	return 0;
}