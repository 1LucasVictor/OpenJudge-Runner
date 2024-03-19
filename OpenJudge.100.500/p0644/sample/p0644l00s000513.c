#include <stdio.h>
int main()
{
    int sum=0;
    char a;
    while(scanf("%c",&a)!=EOF)
    {
        if(a=='1')sum++;
    }
    printf("%d\n",sum);
   return 0;
}
