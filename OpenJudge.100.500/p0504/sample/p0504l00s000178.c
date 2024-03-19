#include <stdio.h>
int main(void){
    int h,a,i;
    scanf("%d %d",&h,&a);
    for(i = 0; h > 0; i++){
        h -= a;
    }
    printf("%d",i);
    return 0;
}