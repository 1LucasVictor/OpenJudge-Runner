#include <stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int main(void){
    int n,x,y;
    scanf("%d%d%d",&n,&x,&y);
    printf("%d",min(n*x,y));
    return 0;
}