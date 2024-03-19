#include<stdio.h>
#include <string.h>
int main(){
    char a[3], b[]="AAA", c[]="BBB";
    scanf("%s",a);
    //printf("%s\n%s\n%s",a,b,c);
    if(strcmp(a,b)==0||strcmp(a,c)==0){ printf("No"); return 0; }
    printf("Yes");
    return 0;
}