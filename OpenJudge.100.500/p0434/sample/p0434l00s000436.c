#include <stdio.h>

int main(void){
    int temp;
    scanf("%d", &temp);
    
    if(temp >= 30 && temp <= 40)
        printf("Yes\n");
    else if(temp >= -40 && temp < 30)
        printf("No\n");
    else
        return 1;

    return 0;
}