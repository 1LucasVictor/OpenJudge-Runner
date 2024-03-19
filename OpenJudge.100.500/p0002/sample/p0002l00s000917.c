#include <stdio.h>


int main(void){
	int lineMax = 0;
	int argnum = 0;
	int line = 0;
	int x = 0;
	int y = 0;
	int z = 0;
	char c;
	while(1){
		c = getchar();
		if(c =='\n'){break;}
		lineMax = lineMax*10 + (c - '0');
	}
	while(1){
		c = getchar();
		if(lineMax <= line){break;}
		if(c == ' '){
			argnum++;
		}else if(c == '\n'){
			printf("%s\n",x*x == y*y + z*z || y*y == z*z + x*x || z*z == x*x + y*y ? "YES":"NO");
			argnum = 0;
			x = 0;
			y = 0;
			z = 0;
			line++;
		}else if(argnum == 0){
			x = x * 10 + (c - '0');
		}else if(argnum == 1){
			y = y * 10 + (c - '0');
		}else if(argnum == 2){
			z = z * 10 + (c - '0');
		}
	}
	return 0;
}