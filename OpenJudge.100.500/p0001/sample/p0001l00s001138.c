#include<stdio.h>
int main(void){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        a+=b;
        b=1;
        while(a>=10){
            a/=10;
            b++;
        }
        printf("%d\n",b);
    }
    return 0;
}