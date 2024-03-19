#include <stdio.h>

int main(void){
    char line[1001];
    int i,sum;
    for(;sum=0,i=0,scanf("%s",line),line[0] != '0';){
        while(line[i])
            sum+=line[i++]-'0';
        printf("%d\n",sum);
    }
    return 0;
}

