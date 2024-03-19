#include <stdio.h>

int main() {
    int h, a;
    scanf("%d %d", &h,&a);
    int count;
    count = 0;
    for (int i=0; i<10000;i++){
        h -=a;
        count++;
        if (h<0)break;
    }
    printf("%d",count);
    return 0;
}