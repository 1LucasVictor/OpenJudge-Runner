#include <stdio.h>
int main(void){
    int a,n=0;
    scanf("%d",&a);
    if(a/100==1){
        n+=1;
        a%=100;
    }
    if(a/10==1){
        n+=1;
        a%=10;
    }
    n+=a;
    printf("%d\n",n);
    return 0;
}
