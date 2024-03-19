#include <stdio.h>

int main(int argc, const char * argv[]) {
    int W,H,x,y,r,a,b,c,d;
    scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);
    a = x-r;
    b = y-r;
    c = x+r;
    d = y+r;
    if(a<0  && b<0){
        printf("No\n");
    }else if(c<=W && d<=H && W != x && H != y){
        printf("Yes\n");
    }else{
        printf("No\n");
    }
    return 0;
}

