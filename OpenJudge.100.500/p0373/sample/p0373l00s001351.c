#include <stdio.h>

int main(void) {
	int h,w;
	while(scanf("%d%d", &h,&w)){
		if(h == 0 && w == 0)
			break;
		int i,c;
		for(i =0; h > i; i++){
			for(c = 0; w > c; c++){
				if(i == 0 || c == 0 || c == w-1 || i == h-1)printf("#");
				else printf(".");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}