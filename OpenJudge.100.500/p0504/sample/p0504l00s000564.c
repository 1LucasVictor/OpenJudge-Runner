#include <stdio.h>

int main(){
    int h, a;
    scanf("%d",&h);
    scanf("%d",&a);
    if((h%a) == 0)
        printf("%d",h/a);
    else
        printf("%d",h/a + 1);
    return 0;
}