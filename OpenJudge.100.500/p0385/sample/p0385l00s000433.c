#include <stdio.h>

int main(void)
{
    char x[5];
    int sum;
    int i;
    
    while(1){
        scanf("%s", x);
        sum=0;
        for(i=0; x[i]!='\0'; i++){
            sum += x[i]-'0';
        }
        if(sum==0){
            break;
        }
        printf("%d\n", sum);
    }
    
    return 0;
}