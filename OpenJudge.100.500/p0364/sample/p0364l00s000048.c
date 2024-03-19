#include <stdio.h>
int main()
{
    int W,H,x,y,r;

    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

    if(x>=W||y>=H){
        printf("No\n");
         if(x<=-1*W||y<=-1*H){
            printf("No\n");
        }
    }
    else if(x+r>W||y+r>H){
        printf("No\n");
    }else{
        printf("Yes\n");
    }
    return 0;
}