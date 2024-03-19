#include <stdio.h>

int main(void){
    char a[4];
    int check = 0;
    scanf("%s",a);

    for(int i=0;i<4;i++){
        if(a[i]==a[i+1]){
            check++;
        }
    }

    if(0 < check){
        printf("Bad\n");
    }else{
        printf("Good\n");
    }


}