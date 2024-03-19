#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    int a;
    char buf[30];
    fgets(buf, sizeof(buf),stdin);
    a=atoi(buf);
    if(a<=10&&a>=1){
        a=a+a*a+a*a*a;
        printf("%d\n",a);
    }
}