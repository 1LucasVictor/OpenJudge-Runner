#include <stdio.h>
int main(){
    int time,h,min;
    scanf("%d",&time);
    h=time/3600;
    min=(time-3600*h)/60;
    printf("%d:%d:%d\n",h,min,time%60);
    return 0;
}
