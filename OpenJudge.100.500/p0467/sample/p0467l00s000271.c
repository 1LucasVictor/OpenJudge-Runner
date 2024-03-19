#include<stdio.h>
int a,b,c,k,i,r;
int main(){
    scanf("%d%d%d%d",&a,&b,&c,&k);
    if(k<=a)printf("%d",k);
    else if(k<=a+b)printf("%d",a);
    else printf("%d",a-(k-a-b));
    return 0;
}