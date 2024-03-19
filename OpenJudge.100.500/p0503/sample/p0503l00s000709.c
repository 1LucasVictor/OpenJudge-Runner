#include<stdio.h>
#include<string.h>
int main()
{
    int N;
  int a[10];
    int i,j;
    int icouter=1;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0; i<N-1; i++)
    {
        for(j=i+1;j<N;j++)
        {
            if (a[i]==a[j])
            {
                icouter=0;
                printf("NO");
                return 1;
            }
        }
    }
 
        printf("YES");
     
    return  0;
}
