#include<stdio.h>

int main(void){
        while(1){
                int h, w;
                scanf("%d %d", &h, &w);
                if(h+w==0) break;

                for(int i=0; i<h; i++){
                        for(int j=0; j<w; j++){
                                if(i==0 || i==h-1 || j==0 || j==w-1) putchar('#');
                                else putchar('.');
                        }
                        puts("");
                }
                puts("");
        }
        return 0;
}
