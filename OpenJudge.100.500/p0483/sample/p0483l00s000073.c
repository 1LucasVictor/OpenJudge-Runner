#include <stdio.h>
int main()
{
    char a[3];
    scanf("%s",&a);
    if(a[0]=='7'||a[1]=='7'||a[2]=='7')
        printf("Yes");
    else
        printf("No");
    return 0;
}
