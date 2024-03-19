#include <stdio.h>
int main(void){
    
    int h,a;
    int count=0;
    scanf("%d%d",&h,&a);
    while(h>0){
        h-=a;
        count++;
    }
    printf("%d",count);
    return 0;
}
