#include <stdio.h>
int main(void)
{
    int W,H,x,y,r;
    int temp;
    
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);

    if(x-r<0){
        printf("No\n");
    }else if(x+r>W){
        printf("No\n");
    }else if(y-r<0){
        printf("No\n");
    }else if(y+r>H){
        printf("No\n");
    }else{
        printf("Yes\n");
    }

    return 0;
}
