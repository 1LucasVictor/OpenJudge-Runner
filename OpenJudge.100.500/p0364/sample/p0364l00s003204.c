#include <stdio.h>
int main(void){
    int W, H, x, y, r;
    scanf("%d", &W);
    scanf("%d", &H);
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &r);
    if(x-r>=0&&x+r<=W&&y-r>=0&&y+r<=H)
    puts("Yes");
    else
    puts("No");
    return 0;
}
