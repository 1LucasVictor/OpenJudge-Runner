#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef long long ll;


int main()
{
    char s[3],a[3]="AAA",b[3]="BBB";
    scanf("%s",s);


    if(strcmp(s,a)==0||strcmp(s,b)==0)
    {
        printf("No\n");
    }
    else
    {
        printf("Yes\n");
    }

    return 0;
}