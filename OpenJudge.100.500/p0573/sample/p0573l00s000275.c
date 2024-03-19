#include<stdio.h>
#include<string.h>
int main()
{
    char str[4];
    int count=0,i,j;

    scanf("%s",str);

    for(i=0;i<3;i++)
         for(j=i+1;j<4;j++)
    {
        if(str[j]==str[i])
            count++;
    }
        if(count==2)
            printf("Yes");
        else
            printf("No");
return 0;
}
