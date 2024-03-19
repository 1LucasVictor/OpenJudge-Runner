#include <stdio.h>

int main(void)
{

 int n[1000];
 int x[1000];
 int a = 0;
 int b = 0;
 int c = 0;
 int i, j;

 while (a == 0)
{
     
  scanf("%d", &n[b]);
  scanf("%d", &x[b]);

 if(n[b] == 0 && x[b] == 0)
 {
  a = 1;
  }else
 {
   for (i = 1; i < n[b]; i++)
{
  for (j = 1; j < n[b]; j++)
 
{
  if( x[b] - i - j > 0 && i != j)
  c++;

 }
 }
  printf("%d\n", c/6);
}

  b++;
 c = 0;
}



return 0;

}



 
