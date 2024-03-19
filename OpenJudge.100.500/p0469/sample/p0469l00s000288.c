#include<stdio.h>
int main()
{
     int n,x,y,c=0;
     scanf("%d%d%d",&n,&x,&y);
     for(int i=x;i<=y;i++)
     {
          if(i%n==0) c++;
          if(c==1) break;
     }
     if(c==1)
          printf("OK\n");
     if(c==0)
          printf("NG\n");
}
