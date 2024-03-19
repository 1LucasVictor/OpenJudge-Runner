#include<stdio.h>
#include<stdlib.h>
 
int main(void)
{
 int *list;
 int n,i,j,cnt;
 
 while(scanf("%d",&n) != EOF)
 {
  cnt = 0;
  list = (int*)calloc(n+1,sizeof(int));
  for(i = 2; i <= n; i++)
  {
   if(list[i] != 1) /*prime number:0 no prime numbers:1*/
   { 
    cnt++;
    for(j = i+i; j <= n; j+=i) list[j] = 1;
   }
  }
  printf("%d\n",cnt);
  free(list);
 } 
 return 0;
}