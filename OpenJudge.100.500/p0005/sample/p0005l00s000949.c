#include <stdio.h>

int main(int argc, const char * argv[]) {
    char str[20];
    int i,count=0;
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
        count++;
    for(i=count-1;i>=0;i--)
        printf("%c",str[i]);
    printf("\n");
    return 0;
}