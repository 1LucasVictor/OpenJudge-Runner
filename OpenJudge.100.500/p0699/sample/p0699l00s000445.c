#include <stdio.h>

int main(void){
    int a,b,c=0;

    scanf("%d %d %d",&a,&b,&c);
    if(a*b*c==175){
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}
