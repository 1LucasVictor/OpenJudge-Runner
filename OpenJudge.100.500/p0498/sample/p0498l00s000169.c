#include<stdio.h>
int main()
  { 
    int n,i,count=0;
    scanf("%d",&n);
    if(n>1)
      { 
        for(i=2;i<=n;i++)
          { 
             if(i%2==1)
               { 
                count++;
               }
          }
       count++;
       printf("%d",count);
      }
  else if(n==1)
    printf("1");
  return 0;
  }