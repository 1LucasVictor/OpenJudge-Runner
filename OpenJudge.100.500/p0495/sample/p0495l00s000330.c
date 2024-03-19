#include<stdio.h>
#include<math.h>
int main()
{
    int i,j;
    char s[3];
    scanf("%s",s);
    if(s[0]==s[1]&&s[1]==s[2])
        printf("No");
    else
        printf("Yes");
    return 0;
}
