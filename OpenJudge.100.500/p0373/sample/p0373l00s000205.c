#include<stdio.h>

#define TOP_END	'#'
#define SONOTA  '.'
int main()
{
	int h,w;
	int loop_h,loop_w;
	int str='\0';

	while(1) {
		scanf("%d %d",&h,&w);
		if ((h==0)&&(w==0)) {
			return 0;
		}

		for (loop_h=0 ; loop_h<h ; loop_h++) {
			for (loop_w=0 ; loop_w<w ; loop_w++) {
				if ((loop_h == 0)||(loop_h == (h-1))) {
					str = TOP_END;
				}
				else {
					if ((loop_w == 0)||(loop_w == (w-1))) {
						str = TOP_END;
					}
					else {
						str = SONOTA;
					}
				}
				printf("%c",str);
			}
			printf("\n");
		}
		printf("\n");
	}
}