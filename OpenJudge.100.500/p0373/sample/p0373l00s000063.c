#include<stdio.h>
#include<math.h>

void writeSharp(int num) {
	int i;
	for(i = 0; i < num; i++) {
		printf("#");
	}
	printf("\n");
}

int main () {
	int width , height;
	int i , s;
	while(1) {
		
		scanf("%d %d" , &height , &width);
		if (height == 0 && width == 0) break;
		
		writeSharp(width);
		for(i = 0; i < height - 2; i++) {
			printf("#");
			for(s = 0; s < width - 2; s++) {
				printf(".");
			}
			printf("#\n");
		}
		writeSharp(width);
		printf("\n");
	}
	return 0;
}