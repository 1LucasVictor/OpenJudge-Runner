#include<stdio.h>

int main(void)
{
    int x,y,z;

    scanf("%d %d",&x, &y);

    if(y > x){

    z = x;
    x = y;
    y = z;

    }

    if(x > y){

    z = x % y;

    do{

        x = y;
        y = z;
        z = x % y;

    }while(z != 0);

    printf("%d\n",y);

    }

    else{

    printf("%d\n",y);

    }
    return 0;
}
