#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    if(n<10 && n>=1 && m<10 && m>=1)
        printf("%d",n*m);
    else
        printf("-1");
    return 0;
}
