#include <stdio.h>
int getDigitNum(int a){
	int k = 0;
	while(a > 0){
		a /= 10;
		k++;
	}
	return k;
}

int main(void){
	int argnum = 0;
	int a = 0;
	int b = 0;
	char c;
	while(1){
		c = getchar();
		if(c == EOF){break;}
		if(c == ' '){
			argnum++;
		}else if(c == '\n'){
			printf("%d\n",getDigitNum(a+b));
			argnum = 0;
			a = 0;
			b = 0;
		}else if(argnum == 0){
			a = a * 10 + (c - '0');
		}else if(argnum == 1){
			b = b * 10 + (c - '0');
		}
	}
	return 0;
}