#include <stdio.h>
int main(void){
    int x,y,r,W,H;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    if(r<=x&&(W-r)>=x&&r<=y&&(H-r)>=y){
                    printf("Yes\n");
                        }
    else{
        printf("No\n");
    }                 
return 0;
}
