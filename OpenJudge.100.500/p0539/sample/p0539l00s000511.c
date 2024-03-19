#include<stdio.h>
int main()
  { 
   int N,i,j,count=0;
   scanf("%d",&N);
   for(i=1;i<=9;i++)
     { 
        for(j=1;j<=9;j++)
          { 
            if(N==i*j)
              { 
                count++;
              }
          }
     } 
  if(count>0)
    { 
      printf("Yes");
      }
  else
    { 
      printf("No");
    }
  return 0;
  }

    