#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int a;
    char buf[30];
    
    fgets(buf,sizeof(buf),stdin);
    a=atoi(buf);

    if(a<1 || a>10){
        return 1;
    }
    printf("%d\n",a+a*a+a*a*a);

    return 0;
}