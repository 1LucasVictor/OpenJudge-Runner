#include<stdio.h>

int main()
{
 char g[3];
 int i=0;

 scanf("%s",g);

 if(g[0]=='1')i++;
 if(g[1]=='1')i++;
 if(g[2]=='1')i++;

 printf("%d\n",i);

 return 0;
}
