#include<stdio.h>
#include<string.h>
int main(void){
    int weeks;
    int account = 100000;
    int surplus;
    int i;
    scanf("%d", &weeks);
    for(i = 0; i < weeks; i++){
        account *= 1.05;   
    
        if((surplus = account % 1000) != 0){
            account -= surplus;
            account += 1000;
        }
    }
    
    printf("%d", account);
    putchar('\n');
    return 0;
}