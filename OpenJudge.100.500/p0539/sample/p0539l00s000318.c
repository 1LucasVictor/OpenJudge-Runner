#include <stdio.h>
int main(void)
{
    int x,i,j;
    scanf("%d",&x);
    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            if(x==i*j){
                printf("Yes");
                return 0;
            }
        }
    }
    printf("No");
    return 0;
}
