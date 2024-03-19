#include <stdio.h>
int main(){
    int a[2];

    scanf("%d %d", &a[0], &a[1]);

    if(a[0] <= 8 && a[1] <= 8){
        printf("Yay!\n");
    }else{
        printf(":(\n");
    }

    return 0;
}