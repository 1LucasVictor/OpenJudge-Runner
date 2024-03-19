#include<stdio.h>

int main()
{
    int W,H,x,y,r;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    if(0 > x - r || x + r > W || y + r > H || 0 > y - r){
            printf("No\n");
    }else{
        printf("Yes\n");
    }
    return 0;
}