#include<stdio.h>

int main ()

{
    int H,A,n;
    scanf("%d%d",&H,&A);
    n=H/A;
    if(H%A==0) {
        printf("%d\n",n);
    }
    else printf("%d",n+1);

    return 0;

}
