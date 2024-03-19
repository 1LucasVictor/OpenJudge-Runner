#include <stdio.h>

int main(void){
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(c<0||d<0) printf("No\n");
    if(c<=a-e&&d<=b-e) printf("Yes\n");
    else{
        printf("No\n");
    }
    return 0;
}