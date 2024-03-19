#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[10]={},b[11]={};
    scanf("%s",&a);
    scanf("%s",&b);
    if(strncmp(a,b,strlen(a))!=0) printf("No");
    else printf("Yes");
    return 0;
}
