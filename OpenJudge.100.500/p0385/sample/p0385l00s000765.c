#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

    int  i, len;
    int  sum =0,x;
    char str[1000],c;
    

    while(1){
        scanf("%s",str);
        len = strlen(str);
        x = atoi(str);
        if(x == 0){break;}
        
        for(i = 0; i < len; i++){
            sum += str[i] - '0';
        }

        printf("%d\n",sum);
        sum = 0;
    }

    return 0;
}