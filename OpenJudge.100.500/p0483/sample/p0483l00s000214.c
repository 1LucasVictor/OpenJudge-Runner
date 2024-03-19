#include<stdio.h>
#include<string.h>
int main()
{
    char N[10];
    scanf("%s",N);
    for(int i=0;i<strlen(N);i++)
    {
        if(N[i]=='7')
        {printf("Yes\n");
          goto l;
        }
    }
    printf("No\n");
    l:return 0;
}
