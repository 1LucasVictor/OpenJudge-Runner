#include<stdio.h>

int main()
{
    
    int count;
    int sum;
    int result[1000];
    int i;
    char buffer[1000];
    
    for(count=0;;count++)
    {
        fgets(buffer, 1000, stdin);
        if('0'==buffer[0]) break;
        sum=0;
        for(i=0;'\n'!=buffer[i];i++)
        {
            sum += buffer[i] - '0';
        }
        result[count] = sum;
    }
    for(i=0;i<count;i++)
    {
        printf("%d\n", result[i]);
    }
    return(0);
}
