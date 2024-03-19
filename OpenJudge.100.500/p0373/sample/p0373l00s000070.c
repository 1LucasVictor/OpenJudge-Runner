#include <stdio.h>
int main(void)
{
	int H,W,i,j,a;
		
	while(1){
		scanf("%d %d",&H,&W);
		if(H==0 && W==0) break;
			for(i=0; i<W;i++)			putchar('#');
				putchar('\n');
				
		for(j=1; j<H-1;j++){
				putchar('#');
	    	for(i=1; i<W-1;i++)			putchar('.');
			puts("#");
		}
				for(i=0; i<W;i++)			putchar('#');
				putchar('\n');


	putchar('\n');
	}
	return 0;
}
