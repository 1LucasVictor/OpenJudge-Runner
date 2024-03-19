#include <stdio.h>

int main(void){
    int a[4];
    int in, i;

    scanf("%d", &in);

    for(i=3;i>=0;i--){
        a[i] = in % 10;
        in /= 10;
    }
    for(i=0;i<3;i++){
        if(a[i]==a[i+1]){
            printf("Bad\n");
            return 0;
        }
    }

    printf("Good\n");

    return 0;
}