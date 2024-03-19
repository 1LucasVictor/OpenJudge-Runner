#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x;
    int y;
    int W;
    int H;
    int r;
    scanf("%d %d %d %d %d",&x,&y,&W,&H,&r);
    if (x-r>=0&&x+r>=W&&y-r>=0&&y+r>=H) {
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    
    return 0;
}