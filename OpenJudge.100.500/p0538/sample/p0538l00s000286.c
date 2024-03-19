//ABC144_A問題
#include <stdio.h>
int main(int argc, char const *argv[]) {
    int x,y;
    scanf("%d %d",&x,&y);

    if(x<10&&y<10){
        printf("%d", x*y);
    }else{
        printf("-1\n");
    }
    return 0;
}
