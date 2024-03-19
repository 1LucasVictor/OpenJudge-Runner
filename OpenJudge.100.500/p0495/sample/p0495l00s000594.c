#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include<string.h>
int main()
{
    char s[3],str[3];
    scanf("%s",s);
    if(strcmp(s,"AAA")==0 || strcmp(s,"BBB")==0)
    {
        printf("No");
        // str = "No";
    }
    if(strcmp(s,"ABA")==0 || strcmp(s,"BAB")==0)
    {
        printf("Yes");
    }
    if(strcmp(s,"BBA")==0 || strcmp(s,"AAB")==0)
    {
        printf("Yes");
        // str = "Yes";
    }
    if(strcmp(s,"ABB")==0 || strcmp(s,"BAA")==0)
    {
        printf("Yes");
        // str = "Yes";
    }
    // printf("%s",str);
    return 0;
}
