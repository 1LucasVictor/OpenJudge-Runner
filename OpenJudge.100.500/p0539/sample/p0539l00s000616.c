#include<stdio.h>
int main()
{
    int N,i,x=0;
    scanf("%d",&N);
    for(i=1; i<=N; i++)
    {


      if(N%i==0)
      {

        if(i<10 && N/i<10)
            {
                printf("Yes");
                x=1;
                break;
            }

       }

    }
    if(x==0)
    {
         printf("No");
    }
    return 0;
}



