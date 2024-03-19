#include <stdio.h>
int main()
{
    int a,b,c;
    scanf(" %d%d%d",&a,&b,&c);
    if((1<=a&&a<=1E9)&&(1<=b&&b<=1E9)&&(1<=c&&c<=1E9)){

        if(0<c&&c<=(a+b)){printf("safe");}
        else {printf("delicious");}
    }
    return 0;
}
