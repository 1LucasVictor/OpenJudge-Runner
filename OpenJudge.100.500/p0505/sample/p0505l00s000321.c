#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    int i = 0,h,n,sum = 0,a;

    scanf("%d%d",&h,&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        sum += a;
    }

    if(sum >= h) printf("Yes\n");
    else printf("No\n");
}
