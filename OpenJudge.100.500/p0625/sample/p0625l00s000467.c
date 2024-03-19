#include <stdio.h>
int main(void){
    int a,b;

    scanf("%d",&a);
    scanf("%d",&b);

    if(a  > 8 || b > 8){
        printf(":(");
    } else {
        printf("Yay!");
    }
    return 0;
}