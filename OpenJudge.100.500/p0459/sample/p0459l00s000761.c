#include<stdio.h>
int main(void){
    int a,b,i;
    int num;
    scanf("%d%d",&a,&b);
    num=a*4;
    for(i=0;i<a;i++){
        if(num==b) break;
        num-=2;
    }
    if(num==b) printf("Yes\n");
    else printf("No\n");

    return 0;
}