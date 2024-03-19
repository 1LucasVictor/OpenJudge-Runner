#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x;
    int y;
    int W;
    int H;
    int r;
    scanf("%d %d %d %d %d",&x,&y,&W,&H,&r);
    if (x+r>W&&x-r<0&&y+r>H&&y-r<0) {
        printf("No\n");
    }else{
        printf("Yes\n");
    }
    
    return 0;
}