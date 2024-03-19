#include<stdio.h>
#include <stdlib.h>
int main(void){
    int data[5];
    char *result;
    for (int i=0; i < 6;i++){
        scanf("%d", data);
    }
    scanf("%d", &data[5]);

    for (int i = 0; i <4;i++){
        for (int j = i; j < 5;j++){
            if(abs(i-j)>data[5]){
                result = ":(";
            }else{
                result = "Yay!";
            }
        }
    }
        printf("%s", result);
    return 0;
}