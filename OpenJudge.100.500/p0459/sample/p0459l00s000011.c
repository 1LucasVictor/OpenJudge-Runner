#include<stdio.h>
int main(){
    int c,t,x,y;
    scanf("%d%d",&x,&y);
    if((y-2*x)%2!=0||(4*x-y)%2!=0||y<2*x||4*x<y)
    printf("No");
    else
    printf("Yes");
    return 0;
}