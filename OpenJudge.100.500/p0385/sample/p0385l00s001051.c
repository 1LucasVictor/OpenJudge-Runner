#include<stdio.h>
#include<string.h>

int main(void){
    int sum,i;
    char X[1001];

    while(1){
        scanf("%s",X);
        if(X[0]=='0') break;
        sum=0;

        for(i=0;i<strlen(X);i++){
            sum+=X[i]-'0';
        }

        printf("%d\n",sum);
    }

    return 0;
}
