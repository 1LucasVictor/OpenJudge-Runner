#include <stdio.h>
int main(void)
{
	int H, W, i, k;
	while(scanf("%d%d", &H,&W), H!=0 || W!=0){
		for(k=0;k<W;k++) printf("#");
		puts("");
		for(i=1;i<H-1;i++){
			printf("#");
			for(k=1;k<W-1;k++) printf(".");
			puts("#");
		}
		for(k=0;k<W;k++) printf("#");
		puts("");
		puts("");
	}
	return 0;
}