#include <stdio.h>
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
 
int main(void) {
    int x,y;
 
    scanf("%d %d",&x,&y);
 
    if(x<y)
        swap(&x, &y);
 
    while (y) {
        x = x % y;
        swap(&x, &y);
    }
 
    printf("%d\n",x);
 
    return 0;
}
 