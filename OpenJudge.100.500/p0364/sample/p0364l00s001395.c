#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[])
{
    int w, h, x, y, r;
    scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
    if(x+r<=w&&x-r>=0&&y+r<=h&&y-r>=0){
      printf("Yes\n");
    }else{
      printf("No\n");
    }
    return 0;
}