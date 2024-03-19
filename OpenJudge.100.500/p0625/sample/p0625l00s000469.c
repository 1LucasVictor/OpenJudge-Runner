#include <stdio.h>

int main(void){
        int a,b;
        scanf("%d %d",&a,&b);
        int n,ans;
        if(a>b){
                ans=16-b*2;
                n=(a-b)*2;
        }
        else{
                ans=16-a*2;
                n=(b-a)*2;
        }
        if(ans-n<0)printf(":(\n");
        else printf("Yay!\n");
        return 0;
}