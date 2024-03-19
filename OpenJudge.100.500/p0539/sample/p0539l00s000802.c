#include<stdio.h>
#include<math.h>

int main()
{
    int n,c=0;
    scanf("%d",&n);
    for(int i=2; i<=81; i++)
    {
        if(n%i==0)
        {
            printf("Yes");c++;
            break;
        }
    }
    if(c==0)
        printf("No");
    printf("\n");
    return 0;
}
