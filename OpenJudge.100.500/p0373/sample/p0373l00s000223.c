#include <stdio.h>
int main(void){
    int H,W,i,j,g;
    for(;;){
        scanf("%d %d\n",&H,&W);
        if(H==0&&W==0)break;
        for(j=1;j<=W;j++){
            putchar('#');
        }
        putchar('\n');
        for(g=1;g<=H-2;g++){
            putchar('#');
            for(i=1;i<=W-2;i++){
            putchar('.');
            }
            putchar('#');
            putchar('\n');
        }
        for(j=1;j<=W;j++){
            putchar('#');
        }
        putchar('\n');
        putchar('\n');
    }    
    
    return 0;
    
}
