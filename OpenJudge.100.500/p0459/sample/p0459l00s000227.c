#include<stdio.h>
int main(){
    int x, y;
    scanf("%d%d",&x,&y);
    if(y - 2 * x >= 0 && y % 2 == 0 && 4 * x - y >= 0)
        puts("Yes");
    else puts("No");
    return 0;
}