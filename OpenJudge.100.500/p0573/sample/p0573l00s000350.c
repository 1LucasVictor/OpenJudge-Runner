#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void){
    char a[10];
    scanf("%s",a);
    if(a[0]==a[1]&&a[1]!=a[2]&&a[2]==a[3]){printf("Yes\n");}
    else if(a[0]==a[2]&&a[1]!=a[2]&&a[1]==a[3]){printf("Yes\n");}
    else if(a[0]==a[3]&&a[3]!=a[2]&&a[1]==a[2]){printf("Yes\n");}
    else {printf("No\n");}
    return 0;
}