#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(void){
    int a,b,i,k,ans,flag=0;
    scanf("%d\n",&k);
    scanf("%d %d",&a,&b);
    for(i=0; i<b-a; i++){
        ans = b+i;
        if(ans%k==0)flag++;
    }
    if(flag==0)printf("NG");
    else printf("OK");
    return 0;
}