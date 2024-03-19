#include<stdio.h>
int main(void){
    int h,a;
    scanf("%d",&h);
    scanf("%d",&a);
    int count  = 0;
    while (h  > 0)
    {
        h -= a;
        count++;
    }
    printf("%d\n",count);  
    return 0;
}