#include <stdio.h>
 
int main(int argc, const char * argv[]) {
 
    int W;
    int H;
    int x;
    int y;
    int r;
     
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    if (x-r < 0 || x+r > W ||  y-r < 0 || y+r > H) {
        printf("No\n");
    } else {
        printf("Yes\n");
    }
        return 0;
}