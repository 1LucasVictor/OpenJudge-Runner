#include<stdio.h>
int main(){
    int k,a,b,c,t;
    scanf("%d %d %d %d",&a,&b,&c,&k);
    if(k<=a) {t=k;}
    else if(k<=a+b) {t=a;}
    else  {t=a-(k-a-b);} 
    printf("%d",t);
    return 0;
}