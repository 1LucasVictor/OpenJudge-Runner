#include<stdio.h>
int main(void){
    int h,a,i;
    scanf("%d",&h);
    scanf("%d",&a);

    for(i=0;h>0;i++){
        h=h-a;
    }
    printf("%d\n",i);

    return 0;
}