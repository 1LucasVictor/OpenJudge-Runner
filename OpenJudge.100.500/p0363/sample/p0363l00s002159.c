#include <stdio.h>

int main(void)
{
    int i1, i2, i3, o;
    scanf("%d %d %d", &i1, &i2, &i3);
    if(i1 > i2){
        o = i1;
        i1 = i2;
        i2 = o;
    }
    if(i2 > i3){
        o = i2;
        i2 = i3;
        i3 = o;
        if(i1 > i2){
            o = i1;
            i1 = i2;
            i2 = o;
        }
    }
    printf("%d %d %d\n", i1, i2, i3);
    return (0);
}
