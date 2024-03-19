#include<stdio.h>
int main(void)
{
    int h,w,i,y;
    while(1){
        scanf("%d %d",&h,&w);
        if(w+h==0) break;
        for(i=0;i<h;i++){
            for(y=0;y<w;y++){
                if(0<i&&i<h-1&&0<y&&y<w-1)
                    printf(".");
                else if(i==0||y==0||i==h-1||y==w-1)
                    printf("#");

            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

