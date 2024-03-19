#include<stdio.h>

int main(void){
    char str[5];
    int i, j=0;
    scanf("%s",str);
    for(i=0;i<3;i++){
        if(str[i] == str[i+1]){
            j++;
        }
    }
    if(j == 0){
        printf("Good\n");
    }
    else{
        printf("Bad\n");
    }
    return 0;
    
}
