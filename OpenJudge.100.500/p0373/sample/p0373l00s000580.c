#include <stdio.h>

main(void)
{
	int H,W,a,b;
	
	while(1){
		scanf("%d%d",&H,&W);
		
		if(H==0 && W==0) break;
		
		for(a=1;a<=H;a++){
			for(b=1;b<=W;b++){
				if(a==1 || a==H) printf("#");
				
				else if(a!=1 && a!=H){
					if(b==1 || b==W) printf("#");
					else printf(".");
				}
			}
			printf("\n");
		}
	}
	return 0;
}
	