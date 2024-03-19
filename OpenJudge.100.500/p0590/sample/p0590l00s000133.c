#include<stdio.h>
#include <stdlib.h>
int main(void){
    int data[6];
    char *result;
    for (int i=0; i < 6;i++){
        scanf("%d", &data[i]);
    }
    scanf("%d", &data[5]);
  	result = "Yay!";
    for (int i = 0; i <4;i++){
        for (int j = i+1; j < 5;j++){
            if(abs(i-j)>data[5]){
                result = ":(";
            }
        }
    }
        printf("%s", result);
    return 0;
}