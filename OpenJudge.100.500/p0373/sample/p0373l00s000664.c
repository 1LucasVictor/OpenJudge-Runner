#include <stdio.h>
#include <math.h>

int main(void){
    int w,h,temp_w,temp_h;

	while(1){
		scanf("%d %d", &w, &h);
		temp_w = w;
		temp_h = h;

		for(;w != 0;w--){
			for(;h != 0;h--){
				if(w == temp_w || w == 1){
					printf("#");
				}else{
					if(h == temp_h || h ==1){
						printf("#");
					}else{
						printf(".");
					}
				}
			}
			printf("\n");
			h = temp_h;
		}
		if(w == 0 && h == 0){
			break;
		}
		printf("\n");
	}
	return 0;
}