#include <stdio.h>


int main (void) {
	int  num, hun, ten, one;
	
	scanf("%d", &num);
	
	hun = num/100;
	num -= hun*100;
	ten = num/10;
	num -= ten*10;
	one = num/1;

	if(one == 7 || ten == 7 || hun == 7)
		printf("Yes\n");
	else
		printf("No\n");
	
	return 0;
}
