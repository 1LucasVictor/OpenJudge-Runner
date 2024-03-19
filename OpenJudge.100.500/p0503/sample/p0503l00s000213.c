#include<stdio.h>
#include<string.h>
int main()
{
    int N;
  long int a[20];
    int i,j;
    int icouter=1;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%ld",&a[i]);
    }
    for (i=0; i<N-1; i++)
    {
        for(j=i+1;j<N;j++)
        {
            if (a[i]==a[j])
            {
                icouter=0;
            }
        }
    }
    if(icouter==1)
        printf("YES");
    else{
        printf("NO");
    }
    return  0;
}