#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10];
    char ch1[20];

    int i, count=0, z, a;

    scanf("%s", ch);
    scanf("%s", ch1);

    z = strlen(ch);
    a = strlen(ch1);

    ch[z] = ch1[a-1];
    ch[z+1] = '\0';
    //printf("%d %d", z, a);
    //printf("%s", ch);

    if(strcmp(ch, ch1) == 0)
    {
        printf("Yes");
    }

    else
    {
        printf("No");
    }


    return 0;
}
