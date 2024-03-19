#include <stdio.h>
int main(void){
    int H,W,h,w;
    while(1){
    scanf("%d %d",&H,&W);
    if(H==0 && W==0)
	break;
    for(h=1; h<=H; h++){
    	for(w=1; w<=W; w++){
		if(w==1 || h==1 || w==W ||h==H)
    			putchar('#');
		else
			putchar('.');
	}
	putchar('\n');
    }
    putchar('\n');
    }
    return 0;
}