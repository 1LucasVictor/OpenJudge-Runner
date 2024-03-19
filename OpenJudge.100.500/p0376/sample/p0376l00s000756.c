#include <stdio.h>
int main(void){
    int a,b[100],i;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    scanf("%d",&b[i]);
    for(i=a;i>=1;i--){
        if(i>1)
        printf("%d ",b[i]);
        else
        printf("%d",b[i]);
    }
    printf("\n");
    return 0;
}

