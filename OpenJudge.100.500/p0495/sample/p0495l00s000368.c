#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    char x[5];
    scanf("%s",&x);
    if(x[0]==x[1] && x[0]==x[2])
    printf("No\n");
    else printf("Yes\n");
    return 0;
}
