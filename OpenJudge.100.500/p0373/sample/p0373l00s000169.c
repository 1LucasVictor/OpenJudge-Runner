#include <stdio.h>

int main()
{
    int i,j,k,count=0,W[1000],H[1000];
    for (i=0; i<1000; i++){
        scanf("%d%d",&H[i], &W[i]);
        count++;
        if (W[i]==0&&H[i]==0){
            break;
        }
    }
    printf("\n");
    for (i=0;i<=count; i++){
        for (j=0;j<H[i]; j++){
            for (k=0;k<W[i];k++){
                if (j==0||j==H[i]-1){
                    printf("#");
                }
                else{
                    (k==0||k==W[i]-1)?printf("#"):printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}