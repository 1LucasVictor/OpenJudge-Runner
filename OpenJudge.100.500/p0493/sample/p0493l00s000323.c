#include<stdio.h>
int main(void){
    int X;
    int count500;
    int XX;
    int count5;
    int happy;
    scanf("%d",&X);
    count500=X/500;
    XX=X%500;
    count5=XX/5;
    happy=count500*1000+count5*5;
    printf("%d\n",happy);
    return 0;
}