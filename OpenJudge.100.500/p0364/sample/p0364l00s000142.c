#include <stdio.h>

int main(int argc, const char * argv[]) {
    int W,H,x,y,r;
    scanf("%d %d %d %d %d",&H,&W,&x,&y,&r);
    if(x-r<0  && y-r<0){
        printf("No\n");
    }else if(x+r<=W && y+r<=H){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
   
    return 0;
}

