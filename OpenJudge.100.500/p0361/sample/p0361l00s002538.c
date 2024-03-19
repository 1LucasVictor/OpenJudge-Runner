#include<stdio.h>
int main(){
    int sec = 0;
    int h=0,m=0,s=0;
    scanf("%d",&sec);
    h = sec/(60*60);
    m = (sec-(h*60*60))/60;
    s = sec % (60);
//    printf("%d:%d:%d\n",h=sec/24,m=(sec-24*h)/60,sec/(24*60));
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
