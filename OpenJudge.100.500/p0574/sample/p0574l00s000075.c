#include<stdio.h>
int main()
{
    char str[3];
    scanf("%s",str);
    for(int i=0; i<3; i++)
    {


        if(str[i]==str[i+1])
        {
            puts("Bad");
            goto a;
        }



    }
    puts("Good");
a:
    return 0;
}
