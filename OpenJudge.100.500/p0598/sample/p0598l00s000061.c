#include<stdio.h>
int main()
{
    int x, y, f = 0;

    scanf("%d %d",&x, &y);

    if(y % x == 0){
        f = x + y;
        printf("%d\n",f);
    }else{
        f = y - x;
        printf("%d\n",f);
    }


    return 0;
}
