#include <stdio.h>

int main(void){
    int a,b,ans=0;
    scanf("%d %d", &a,&b);
    if(b==1){

    }else if(b%a==0){
        ans=b/a;
    }else{
        ans=b/a+1;
    }
    printf("%d\n",ans );
    return 0;
}
