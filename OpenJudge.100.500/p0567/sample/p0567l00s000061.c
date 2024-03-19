#include <stdio.h>

int limit,one,two;

int main(){
    scanf("%d %d %d",&limit,&one,&two);
    int tmp = limit - one;
    int ans = two - tmp;
    if(ans < 0){
        printf("0");
    } else{
        printf("%d",ans);
    }
}