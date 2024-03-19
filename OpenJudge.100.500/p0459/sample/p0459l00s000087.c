#include <stdio.h>

int main(){
    int n,m;

    scanf("%d %d",&n,&m);

    if ((m%2==0) && (m>=2*n) && (4*n>=m))
        printf("Yes\n");
    else 
        printf("No\n");
    return 0;
}