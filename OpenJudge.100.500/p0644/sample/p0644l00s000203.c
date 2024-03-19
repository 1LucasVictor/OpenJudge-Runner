#include <stdio.h>
#include <string.h>
int main(){
    int count = 0;
    char str[3];
    scanf("%s",str);
    if(str[0]==49)count++;
    if(str[1]==49)count++;
    if(str[2]==49)count++;

    printf("%d",count);

}