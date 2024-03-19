#include<stdio.h>
int main()
{
    char a[1000];
    int i,sum;
    while(1)
    {
        scanf("%s",&a);
        if(a[0]=='0')
        {
            return 0;
        }
        sum = 0;
        for(i=0;a[i]!='\0';i++)
        {
            sum+=a[i]-'0';
        }
        printf("%d\n",sum);
}
return 0;
    }

