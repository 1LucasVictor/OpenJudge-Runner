
#include<stdio.h>

int main (void)
{
    int x, y;

    while(scanf("%d%d",&x,&y) != EOF){
        int z = 1;

        char added[100][100];
        int length[100];

        int i, j;
        int a = 0;
        int b;


        x += y;

        for(;;){
            x /= 10;
            z++;
            if(x < 10){
                break;
            }
        }
        printf("%d\n",z);

    }
    return 0;
}