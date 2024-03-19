#include <stdio.h>

int main() {
    char s[5]="";
    int a=0;
    scanf("%s",&s);
    if(s[0]=='1')
    {
        a++;
    }
    if(s[1]=='1')
    {
        a++;
    }
    if(s[2]=='1')
    {
        a++;
    }
    printf("%d\n",a);
    return 0;
}
