#include <stdio.h>


int main(void){
    
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);

    if (a <= 8){
        if (b <= 8){
            printf("Yay!");
        }
        else printf(":(");
    }
    else printf(":(");

    return 0;

}