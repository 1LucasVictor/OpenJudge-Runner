#include <stdio.h>

#define INPUT_NUMBER 3

int main(void){
    int x,y,W,H,r;
    scanf("%d",&W);
    scanf("%d",&H);
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&r);

    if(r<=x && x<=W-r && r<=y && y<=H-r){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
