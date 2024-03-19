#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    //char num[128],book[128];
    int num;
    //printf("");
    scanf("%d", &num);
    if(num%10 == 2 || num%10 == 4 || num%10 == 5 || num%10 == 7 || num%10 == 9)
    {
        printf("hon");
    }
    else
    {
        if (num%10 == 0 || num%10 == 1 || num%10 == 6 || num%10 == 8)
        {
            /* code */
            printf("pon");
        }
        else
        {
            printf("bon");
        }
        
    }
    return 0;
}