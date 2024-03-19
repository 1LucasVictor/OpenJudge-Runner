#include <stdio.h>
int main(void)
{
    int n,i,j;

    scanf("%d",&n);
    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            if(i*j==n){
                printf("Yes\n");
                i=100;
                break;
            }
        }
    }
    if(i<100)
        printf("No\n");
    return 0;
}