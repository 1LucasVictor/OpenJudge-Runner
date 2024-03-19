#include <stdio.h>
#include <string.h>

int main(){

    char num[1000];
    int size,sum,i = 0;
    while(1){
        scanf("%s",num);
        if(num[0] == '0'){
            break;
        }
        size = strlen(num);
        for(i = 0; i < size; i++){
            sum += num[i] - '0';
        }
        printf("%d\n",sum);
        sum = 0;
    }
    return 0;
}

