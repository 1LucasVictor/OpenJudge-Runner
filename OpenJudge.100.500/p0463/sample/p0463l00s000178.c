#include <stdio.h>
#include<string.h>

int main()
{
    int l=0;
    char n[1000];
    scanf("%s", n);
    l=strlen(n);
    if(n[l-1]=='2' ||n[l-1]=='4' ||n[l-1]=='5' ||n[l-1]=='7' ||n[l-1]=='9')
        printf("hon\n");
    else if(n[l-1]=='0' ||n[l-1]=='1' ||n[l-1]=='6' ||n[l-1]=='8')
        printf("pon\n");
    else if(n[l-1]=='3')
        printf("bon\n");
    return 0;
}
