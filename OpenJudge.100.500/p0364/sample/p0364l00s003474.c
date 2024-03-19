#include<stdio.h>

int main(void){
    int W;
    int H;
    int x;
    int y;
    int r;
    scanf("%d",&W);
    scanf("%d",&H);
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&r);
    if(x>=r && x<=W-r && y>=r && y<=H-r){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}
