#include <stdio.h>

int main(void)
{
        int x,y,i;
        scanf("%d%d",&x,&y);

        for(i=0;i<=x;i++){
                if(i*4+(x-i)*2==y) {
                        printf("Yes\n");
                        return 0;
                }
        }
        printf("Nes\n");
        return 0;
}
