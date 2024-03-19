#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
    int a,b,ans=1;
    scanf("%d%d",&a,&b);
    while(abs(a-ans)!=abs(b-ans)){
        ++ans;
        if(ans>a&&ans>b){
            printf("IMPOSSIBLE");
        }
        if(ans>a&&ans>b)
        break;
    }
    if(abs(a-ans)==abs(b-ans))
    printf("%d",ans);
    return 0;
}