#include <stdio.h>
int main(void) {
	int a, c, x;
	char b;
	while(1){
        scanf("%d %c %d", &a, &b, &c);
     	if(b=='+'){
     		x=a+c;
     	}else if(b=='-'){
     		x=a-c;
     	}else if(b=='*'){
     		x=a*c;
     	}else if(b=='/'){
     		x=a/c;
     	}else{
     		break;
     	}
     	printf("%d\n", x);
     	
	}
	return 0;
}

