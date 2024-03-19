#include <stdio.h>
int main(void){
    // Your code here!
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a-b<=c){
        c=c-(a-b);
    }
    else
    {
        c=0;
    }
    printf("%d",c);
}
