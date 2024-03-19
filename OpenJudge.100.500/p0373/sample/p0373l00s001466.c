#include<stdio.h>
int main () {
    int w,h;
    int i,j,k;
    for (i=0;i<1000;i++) {
        scanf("%d %d",&w,&h);
        if (w==0 && h==0)
            break;
        for (j=0;j<w;j++) {
            for (k=0;k<h;k++) {
                if(k==0 || k==h-1 || j==0 || j==w-1) {
                    printf("#");
                } else 
                    printf (".");
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
} 
