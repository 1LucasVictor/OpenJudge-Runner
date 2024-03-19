#include<stdio.h>

int main(void)
{
    char num[1000];
    int sum = 0, i = 0;
    
    while(1){
        scanf("%s", num);
        if(num[0] == '0'){
            break;
        }
        sum = 0;
        for(i=0;num[i] != '\0';i++){
            sum += num[i] - '0';
        }
        printf("%d\n", sum);
    }
    return 0;
}