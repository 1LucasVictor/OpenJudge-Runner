#include <stdio.h>

int main(){
    int x,y,r,tmp;

    scanf("%d%d",&x,&y);

    if (x<y) {
        tmp=x;
        x=y;
        y=tmp;
    }

    while(1){
        r=x%y;
        if (r == 0) break;
        x=y;
        y=r;
    }
    printf("%d\n",y);

    return 0;
}

