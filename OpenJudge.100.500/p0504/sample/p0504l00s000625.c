#include<stdio.h>
int main(){
    int h, a;
    scanf("%d%d",&h,&a);
    if(h % a == 0)
        printf("%d\n",h / a);
    else
        printf("%d\n",(h + a) / a);
    return 0;
}