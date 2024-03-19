#include <stdio.h>

int main(void){
    int num;

    scanf("%d", &num);
    if(num/100==7){
        printf("Yes");
    }else if((num/10-num/100*10)==7){
        printf("Yes");
    }else if(num-(num/10-num/100*10)*10-num/100*100==7){
        printf("Yes");
    }else{
        printf("No");
    }
}