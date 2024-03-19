#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int x=0,gohyaku=0,goen=0;
    char token[200]={};
    fgets(token, sizeof(token), stdin);x=atoi(token);
    gohyaku=x/500;
    x=x%500;
    goen=x/5;
    printf("%d",(gohyaku*1000)+(goen*5));
    return 0;
}


