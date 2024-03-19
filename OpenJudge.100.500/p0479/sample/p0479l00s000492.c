#include<stdio.h>
int main()
{

    int a[100000];
    int n,j,i,cnt,counter;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    cnt=0;
    counter=0;
    for(i=1;i<n;i++)
    {
     if(a[i]!=a[i+1])
        {
           if(a[i]==a[i+1])
           break;
            for(j=0;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    cnt++;

                }

            }
            printf("%d\n",cnt);
           counter++;
        }

        cnt=0;
    }

  for(i=0;i<n-counter;i++)
  {
      printf("0\n");
  }

    return 0;
}
