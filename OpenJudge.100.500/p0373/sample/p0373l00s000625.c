#include<stdio.h>

int main(void){
        int h, w, i, j;

        for(;;){
                scanf("%d %d",&h,&w);
                if(h == 0 && w == 0)
                        break;
                else{
                        for(i=1; i<=h; i++){
                                if(i == 1 || i == h){
                                        for(j=0; j<w; j++)
                                                putchar('#');
                                }else{
                                        for(j=1; j<=w; j++){
                                                if(j == 1 || j == w)
                                                        putchar('#');
                                                else
                                                        putchar('.');
                                        }
                                }
                                printf("\n");
                        }
                        printf("\n");
                }
        }
        return 0;
}