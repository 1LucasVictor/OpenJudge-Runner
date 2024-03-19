#include<stdio.h>

int main(void){

    int a[3];
    int i,j;
    int tmp;
    for(i = 0; i < 3; i++){
        scanf("%d",&a[i]);
    }

    for(i = 0; i < 3; i++){
        for(j = 2 ;j > i; j--){
            if(a[j] < a[j-1]){
                tmp = a[j];
                a[j]= a[j-1];
                a[j-1]= tmp;
            }
        }
    }

    printf("%d %d %d\n",a[0], a[1], a[2]);


    return 0;
}