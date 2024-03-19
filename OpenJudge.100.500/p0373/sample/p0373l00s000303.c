#include <stdio.h>

int check_wall(int x, int y);

int h, w;

int main(int argc, char const *argv[])
{
	int i, j;
	while(1){
		scanf("%d %d", &h, &w);
		if(h == 0 && w == 0)
			break;
		for(i = 0; i < h; i++){
			for(j = 0; j < w; j++){
				if(check_wall(j, i)){
					printf("#");
				}else{
					printf(".");
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}

int check_wall(int x, int y){
	if((x == 0) || (x == (w -1)) || (y == 0) || (y == (h - 1))){
		return 1;
	}
	return 0;
}