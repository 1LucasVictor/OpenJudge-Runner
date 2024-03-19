#include <stdio.h>
int main(void){
    int n,cnt=0;
    scanf("%d",&n);
    while(n>0){
        if(n%10==1) cnt++;
        n/=10;
    }
    printf("%d",cnt);
}
