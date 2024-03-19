#include <stdio.h>


int main(void){
    
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    if (a == 0){
        printf("%d",b);
    }
    else printf("%d",b*100);

    return 0;

}