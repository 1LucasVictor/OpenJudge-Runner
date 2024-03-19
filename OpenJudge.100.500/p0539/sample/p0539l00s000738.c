#include <stdio.h>
int main(void)
{
int N;
  int flag=0;
  scanf("%d",&N);
  for(int i=1;i<=9;i++)
    {
      if(N%i==0 && 1<=N/i && N/i<=9) 
        {
          flag=1;
        }
      	}
      if(flag==1)
      {
      printf("Yes");
      }
    else printf("No");
    
}