#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d %d", &a,&b);
    int ans;

    if(a>=10||b>=10){
        ans=-1;
    }else{
        ans=a*b;
    }
    printf("%d\n",ans );
    return 0;
}
