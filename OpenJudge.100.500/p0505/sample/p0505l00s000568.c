/*Problem B : Common Raccoon vs Monster*/
#include<stdio.h>

int main(void)
{
    int H,N,i;

    scanf("%d %d", &H,&N);

    int attack;
    int sum = 0;

    for(i = 1; i <= N; i++)
    {
        scanf("%d", &attack);
        sum = sum + attack;
    }

    if(sum >= H)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
