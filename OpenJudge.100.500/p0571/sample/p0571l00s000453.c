#include <stdio.h>

int main(void){
    int A,B,n;
    scanf("%d %d %d",&n,&A,&B);
    if(n*A<B){
        printf("%d\n",A*n);
    }else printf("%d\n",B);
    return 0;
}
