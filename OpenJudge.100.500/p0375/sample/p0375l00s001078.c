#include <stdio.h>

int main(){

    int n,a,i,j,k;
    scanf("%d",&n);

    for (i=1; i<n+1; i++)
    {
        j=i/10;
        k=i/10;
        if (i%3==0) {
            printf(" %d",i);
        }
        else if(i%10==3){
            a=i%10;
            printf(" %d",i);
        }
        else if (j%10==3||j/10==3||k%10==3||k/10==3||k%100==3||k/100==3||j%100==3||j/100==3)
            printf(" %d",i);
        else
            ;
    }
    printf("\n");
    return 0;
}