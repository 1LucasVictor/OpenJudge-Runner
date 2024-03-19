#include<stdio.h>
#include <stdlib.h>
int main(void){
    int data[6];
    char *result;
    for (int i=0; i < 6;i++){
        scanf("%d", &data[i]);
    }
  	//result = "Yay!";
    for (int i = 0; i <4;i++){
        for (int j = i+1; j < 5;j++){
            if(abs(j-i)>data[5]){
              //result = ":(";
              puts(":(");
              return 0;
            }
        }
    }
  	puts("Yay!");
    //printf("%s", result);
    return 0;
}