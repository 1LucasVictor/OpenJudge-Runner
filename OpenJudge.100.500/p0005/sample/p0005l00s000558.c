#include <stdio.h>
#define MAX 21

int main(void){
	short i,len;
	char c;
	char cbuf[MAX];
	char cbufinv[MAX];
	for(i = 0; ; i++){
		c = getchar();
		if(c == '\n'){break;}
		cbuf[i] = c;
	}
	cbufinv[i] = 0;
	len = i;
	i--;
	for( ;i >= 0; i--){
		cbufinv[len-i] = cbuf[i];
		putchar(cbufinv[len-i]);
	}
	putchar('\n');
	return 0;
}