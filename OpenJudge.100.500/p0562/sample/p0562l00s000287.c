# include <stdio.h>

int main()
{
    int A,B;
    int i;
    while(scanf("%d %d",&A,&B) != EOF)
    {
        for(i = 1; ;++i)
        {
            if(i * A >= B)
            {
                printf("%d\n",i);
                break;
            }
        }
    }

    return 0;
}