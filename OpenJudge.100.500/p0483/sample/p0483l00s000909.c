#include<stdio.h>
int main()
{
    int N,r,c=0;
    scanf("%d",&N);
    while(N!=0)
    {
      r=N%10;
      N=N/10;
      if(r==7)
      c++;
    }
    if(c>=1)
    printf("Yes\n");
    else
    printf("No\n");
    return 0;
}
