#include <stdio.h>

int main(){

    int n,i,j,k;
    scanf("%d",&n);

    for (i=1; i<n+1; i++)
    {
        j=i/10;
        k=i/10;
        if (i%3==0||i%10==3||i%100==3||i%1000==3) {
            printf(" %d",i);
        }
        else if (j%10==3||j/10==3||k%10==3||k/10==3)
            printf(" %d",i);
        else
            ;
    }
    printf("\n");
    return 0;
}