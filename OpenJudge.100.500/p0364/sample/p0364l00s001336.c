#include <stdio.h>

int main(){


    int W,H,x,y,r;


    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);


    if (W-r>=x&&r<=x&&H-r>=y&&r<=y)
        printf("Yes\n");
    else
        printf("No\n");


    return 0;


}