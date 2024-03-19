#include <stdio.h>

int main(void) {
	int n,x,cou = 0;
	int a,b,c;
	scanf("%d%d",&n,&x);
	for(a = 0; n > a; a++){
		for(b = 0; n > b; b++){
			for(c = 0; n > c; c++){
				if(a != b && a != c && b != c)
					if(a+b+c == x) cou++;
			}	
		}	
	}
	printf("%d\n", cou/3);
	return 0;
}