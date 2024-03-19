#include<stdio.h>
int main(void){
    int W, H, x, y, r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
    if (y - r < 0 || x - r<0 || y + r > H || x + r>W){
            printf("No\n");}
    else
    {
        printf("Yes\n");
     
}
 
    return 0;
}