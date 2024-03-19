#include<stdio.h>
int n;
int answer = 100000;
int i;
int a,b;

int main(void)
{
    scanf("%d",&n);

    for(i = 0;i < n;i++)
    {
        answer = answer * 1.05;
    a = answer % 1000;
    if(a != 0)
    {
        answer = answer - a + 1000;
    }
    }

    printf("%d\n",answer);
    return 0;
}